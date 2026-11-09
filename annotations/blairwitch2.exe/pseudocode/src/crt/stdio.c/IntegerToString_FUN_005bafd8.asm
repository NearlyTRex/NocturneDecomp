; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_stdio_c_IntegerToString_FUN_005bafd8(int value,char *buffer,int base)
;
; Parameters:
; int              Stack[0x4]:4   value
; char *           Stack[0x8]:4   buffer
; int              Stack[0xc]:4   base
;
; XREF[5]:
;   core_patrpoin.cpp_FUN_0059c9c0 at 0059cac3
;   crt_time.c__strftime_FUN_005ba3a4 at 005ba604
;   crt_unknown.c_FUN_005bb6f8 at 005bb708
;   crt_unknown.c_FUN_005bb75c at 005bb799
;   unkafter_2d.cpp_FUN_005c67b0 at 005c6822
;
; Called Functions:
;   crt_unknown.c_FUN_005baf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bafd8
        ;   Label: crt_stdio.c_IntegerToString_FUN_005bafd8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005bafd9
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bafdd
    MOV ECX,dword ptr [ESP + 0x10]      ; 005bafe1
    MOV EDX,EBX                         ; 005bafe5
    CMP ECX,0xa                         ; 005bafe7
    JNZ 0x005baff8                      ; 005bafea
        ;   XREF to: 005baff8 (CONDITIONAL_JUMP)  ; LAB_005baff8
    TEST EAX,EAX                        ; 005bafec
    JGE 0x005baff8                      ; 005bafee
        ;   XREF to: 005baff8 (CONDITIONAL_JUMP)  ; LAB_005baff8
    NEG EAX                             ; 005baff0
    LEA EDX,[EBX + 0x1]                 ; 005baff2
    MOV byte ptr [EBX],0x2d             ; 005baff5
    PUSH ECX                            ; 005baff8
        ;   Label: LAB_005baff8
    PUSH EDX                            ; 005baff9
    PUSH EAX                            ; 005baffa
    CALL crt_unknown.c_FUN_005baf80     ; 005baffb
        ;   XREF to: 005baf80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005baf80()
    ADD ESP,0xc                         ; 005bb000
    MOV EAX,EBX                         ; 005bb003
    POP EBX                             ; 005bb005
    RET                                 ; 005bb006

