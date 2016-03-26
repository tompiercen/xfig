extern int emergency_save (char *file_name);
extern int write_arc (FILE *fp, F_arc *a);
extern int write_compound (FILE *fp, F_compound *com);
extern int write_ellipse (FILE *fp, F_ellipse *e);
extern int write_fig_header (FILE *fp);
extern int write_file (char *file_name, Boolean update_recent);
extern int write_line (FILE *fp, F_line *l);
extern int write_spline (FILE *fp, F_spline *s);
extern int write_text (FILE *fp, F_text *t);
extern void end_write_tmpfile (void);
extern void init_write_tmpfile (void);
