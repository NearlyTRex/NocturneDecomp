; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_dosio_c_getFileTimestamp_FUN_004818d0(char *directory_path,char *filename)
;
; Parameters:
; char *           Stack[0x4]:4   directory_path
; char *           Stack[0x8]:4   filename
; Local Variables:
; SFoundFileInfo   Stack[-0x214]:532  local_214
;
; Called Functions:
;   engine_dosio.c_findFile_FUN_00481760
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;
; *****************************************************************************

section .text

    SUB ESP,0x214                       ; 004818d0
        ;   Label: engine_dosio.c_getFileTimestamp_FUN_004818d0
    MOV EDX,dword ptr [ESP + 0x21c]     ; 004818d6
    PUSH EDX                            ; 004818dd
    MOV ECX,dword ptr [ESP + 0x21c]     ; 004818de
    PUSH ECX                            ; 004818e5
    LEA EAX,[ESP + 0x8]                 ; 004818e6
    PUSH EAX                            ; 004818ea
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 004818eb
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
    ADD ESP,0xc                         ; 004818f0
    MOV EAX,ESP                         ; 004818f3
    PUSH EAX                            ; 004818f5
    CALL engine_dosio.c_findFile_FUN_00481760 ; 004818f6
        ;   XREF to: 00481760 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_findFile_FUN_00481760(SFoundFileInfo * context)
    ADD ESP,0x4                         ; 004818fb
    TEST EAX,EAX                        ; 004818fe
    JZ 0x00481909                       ; 00481900
        ;   XREF to: 00481909 (CONDITIONAL_JUMP)  ; LAB_00481909
    MOV EAX,dword ptr [ESP + 0x20c]     ; 00481902
    ADD ESP,0x214                       ; 00481909
        ;   Label: LAB_00481909
    RET                                 ; 0048190f

