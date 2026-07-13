; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; FILE * __cdecl FID_conflict___wfopen(char *_Filename,char *_Mode)
;
; Parameters:
; char *           Stack[0x4]:4   _Filename
; char *           Stack[0x8]:4   _Mode
;
; XREF[2]:
;   APIDLLsetVideoMode at 10002675
;   FUN_10001200 at 10001231
;
; Called Functions:
;   __fsopen
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 10005560
        ;   Label: FID_conflict:__wfopen
    PUSH 0x40                           ; 10005564
    MOV ECX,dword ptr [ESP + 0x8]       ; 10005566
    PUSH EAX                            ; 1000556a
    PUSH ECX                            ; 1000556b
    CALL __fsopen                       ; 1000556c
        ;   XREF to: 10005520 (UNCONDITIONAL_CALL)  ; FILE * __fsopen(char * _Filename, char * _Mode, int _ShFlag)
    ADD ESP,0xc                         ; 10005571
    RET                                 ; 10005574

