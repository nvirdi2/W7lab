	bool Truck::unloadCargo() 
	{
		bool loadChanged;

		if (Cargo != 0)
		{
			loadChanged = true;
		}
		else
		{
			loadChanged = false;
		}
		Cargo = 0;	
			return loadChanged;
	}

	bool Truck::addCargo(double cargo) 
	{
		bool loadChanged;
		if (cargo == 0 && Capacity == Cargo) 
		{
			loadChanged = false;
		}

		else
		{
			if (Cargo + cargo >= Capacity)
			{
				Cargo = Capacity;
			}
			else
			{
				Cargo += cargo;
			}
			loadChanged = true;
		} return loadChanged;
	}
