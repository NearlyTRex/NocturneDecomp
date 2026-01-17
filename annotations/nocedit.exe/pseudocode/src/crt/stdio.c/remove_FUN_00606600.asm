; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int crt_stdio.c_remove_FUN_00606600(char * filename)
;
; Parameters:
; char *           Stack[0x4]:4   filename
;
; XREF[1]:
;   crt_io.c_deleteFile_FUN_005ff9d0 at 005ff9d5
;
; Referenced Globals:
;   DeleteFileA* g_DeleteFileAFunc = 00211cc2
;
; Called Functions:
;   DeleteFileA
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00606600
        ;   Label: crt_stdio.c_remove_FUN_00606600
    PUSH EDX                            ; 00606604
    CALL dword ptr CS:[0x611524]        ; 00606605 | g_DeleteFileAFunc
    TEST EAX,EAX                        ; 0060660c
    JZ 0x006083fc                       ; 0060660e
        ;   XREF to: 006083fc (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00606614
    RET                                 ; 00606616

