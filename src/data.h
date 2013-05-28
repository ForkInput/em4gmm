/* Expectation Maximization for Gaussian Mixture Models.
Copyright (C) 2012-2013 Juan Daniel Valor Miro

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details. */

#ifndef _data_h
#define _data_h

	typedef struct{
		decimal **data;    /* The data matrix (samples*dimension).  */
		decimal *mean;     /* The mean by dimension of the samples. */
		decimal *variance; /* Variance of all the loaded samples.   */
		number samples;    /* Samples number of the overall data.   */
		number dimension;  /* Dimension number of the data loaded.  */
	}data;

	/* Public functions to work with the samples. */
	data *feas_load(char*,workers*);
	void feas_delete(data*);

#endif
