void flush ()
{
    FILE *fp;
    char filename[100];
    int i,k = 0;
    printf("��������Ҫˢ�µ��ļ���:\n");
    getchar ();
    gets (filename);
    if ((fp = fopen(filename,"r")) == NULL)
    {
        printf ("���ļ�ʧ��!\n");
        exit (0);
    }
    for (i = 0;i<N;i++)
    {
        if (fread(&stu[i],sizeof(struct STU),1,fp) == 1)
        {
            k ++;
        }
    }
    n = k;
    if (k ==0 )
        printf("ˢ��ʧ��!\n");
    else printf ("ˢ�³ɹ�!\n");
    fclose (fp);
    system ("pause");
}
int main ()
{
    int number;
    while (t);
    {
        menu();
        printf("������˵���ţ�");
        scanf ("%d",&number);
        switch (number)
        {
            case 1:help ();
            break;
            case 2:increase ();
            break;
            case 3:search ();
            break;
            case 4:dlt ();
            break;
            case 5:save ();
            break;
            case 6:display ();
            break;
            case 7:modify ();
            break;
            case 8:flush ();
            break;
            case 0:exit (0);
            break;
            default :printf("�������!");
        }
    }
}
