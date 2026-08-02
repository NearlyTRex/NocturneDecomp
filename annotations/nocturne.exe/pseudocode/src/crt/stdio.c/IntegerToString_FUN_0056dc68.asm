; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_IntegerToString_FUN_0056dc68(int value,char *buffer,int base)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
;
; XREF[4]:
;   crt_time.c__strftime_FUN_00566634 at 00566894
;   crt_unknown.c_FUN_005696e8 at 005696f8
;   crt_unknown.c_FUN_0056974c at 00569789
;   crt_unknown.c_FUN_00573ed0 at 00573f42
;
; Called Functions:
;   crt_stdlib.c_itoa_FUN_0056dc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056dc68
        ;   Label: crt_stdio.c_IntegerToString_FUN_0056dc68
    MOV EAX,dword ptr [ESP + 0x8]       ; 0056dc69
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056dc6d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0056dc71
    MOV EDX,EBX                         ; 0056dc75
    CMP ECX,0xa                         ; 0056dc77
    JNZ 0x0056dc88                      ; 0056dc7a
        ;   XREF to: 0056dc88 (CONDITIONAL_JUMP)  ; LAB_0056dc88
    TEST EAX,EAX                        ; 0056dc7c
    JGE 0x0056dc88                      ; 0056dc7e
        ;   XREF to: 0056dc88 (CONDITIONAL_JUMP)  ; LAB_0056dc88
    NEG EAX                             ; 0056dc80
    LEA EDX,[EBX + 0x1]                 ; 0056dc82
    MOV byte ptr [EBX],0x2d             ; 0056dc85
    PUSH ECX                            ; 0056dc88
        ;   Label: LAB_0056dc88
    PUSH EDX                            ; 0056dc89
    PUSH EAX                            ; 0056dc8a
    CALL crt_stdlib.c_itoa_FUN_0056dc10 ; 0056dc8b
        ;   XREF to: 0056dc10 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c_itoa_FUN_0056dc10(int value, char * buffer, int base)
    ADD ESP,0xc                         ; 0056dc90
    MOV EAX,EBX                         ; 0056dc93
    POP EBX                             ; 0056dc95
    RET                                 ; 0056dc96

