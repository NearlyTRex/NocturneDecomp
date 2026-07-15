; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c__store_str_FUN_1000f2a0(char *src,char **pbuf,int *pcount)
;
; Parameters:
; char *           Stack[0x4]:4   src
; char * *         Stack[0x8]:4   pbuf
; int *            Stack[0xc]:4   pcount
;
; XREF[1]:
;   crt_time.c__expandtime_FUN_1000ed30 at 1000ed86
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000f2a0
        ;   Label: crt_time.c__store_str_FUN_1000f2a0
    PUSH ESI                            ; 1000f2a1
    MOV ESI,dword ptr [ESP + 0x14]      ; 1000f2a2
    CMP dword ptr [ESI],0x0             ; 1000f2a6
    JZ 0x1000f2c7                       ; 1000f2a9
        ;   XREF to: 1000f2c7 (CONDITIONAL_JUMP)  ; LAB_1000f2c7
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000f2ab
    MOV EDX,dword ptr [ESP + 0x10]      ; 1000f2af
    MOV BL,byte ptr [ECX]               ; 1000f2b3
        ;   Label: LAB_1000f2b3
    TEST BL,BL                          ; 1000f2b5
    JZ 0x1000f2c7                       ; 1000f2b7
        ;   XREF to: 1000f2c7 (CONDITIONAL_JUMP)  ; LAB_1000f2c7
    MOV EAX,dword ptr [EDX]             ; 1000f2b9
    INC ECX                             ; 1000f2bb
    MOV byte ptr [EAX],BL               ; 1000f2bc
    INC dword ptr [EDX]                 ; 1000f2be
    MOV EAX,dword ptr [ESI]             ; 1000f2c0
    DEC EAX                             ; 1000f2c2
    MOV dword ptr [ESI],EAX             ; 1000f2c3
    JNZ 0x1000f2b3                      ; 1000f2c5
        ;   XREF to: 1000f2b3 (CONDITIONAL_JUMP)  ; LAB_1000f2b3
    POP ESI                             ; 1000f2c7
        ;   Label: LAB_1000f2c7
    POP EBX                             ; 1000f2c8
    RET                                 ; 1000f2c9

