

void placer(grille[N][N],int position){
	switch(position)
		{	case 1: horizontalD(); break;
			case 2: horizontalG(); break;
			case 3: verticalH(); break;
			case 4: verticalB(); break;
			case 5: diagonalHG();	break;
			case 6: diagonalBD(); break;
			case 7: diagonalHD(); break;
			case 8:	diagonalBG();break;
			case 0: printf("Erreur: votre choix doit �tre compris entre 1 et 8\n");
			default: printf("Erreur: votre choix doit �tre compris entre 1 et 8\n");
		}
}

int selection_theme(){
	int choix;
	printf("Choisissez un thème");
	scanf("%i",&choix);
	return choix;
}

void selection_du_mot(grille[N][N],int xdeb, int ydeb, int xfin, int yfin){
	int i,j;
	printf("Donner les coordonné de la première lettre x = \n");
	scanf("%i",&xdeb);
	printf("Donner les coordonné de la première lettre y = \n");
	scanf("%i",&ydeb);
	printf("Donner les coordonné de la première lettre x = \n");
	scanf("%i",&xfin);
	printf("Donner les coordonné de la première lettre y = \n");
	scanf("%i",&yfin);
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
		}
	}
}
	
	
	