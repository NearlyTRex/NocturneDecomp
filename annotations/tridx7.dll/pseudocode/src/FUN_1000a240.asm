; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000a240(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined        Stack[-0xc]:1  local_c
;
; Called Functions:
;   ___strgtold12
;   FUN_1000a170
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 1000a240
        ;   Label: FUN_1000a240
    SUB ESP,0x10                        ; 1000a244
    LEA ECX,[ESP]                       ; 1000a247
    PUSH 0x0                            ; 1000a24b
    LEA EDX,[ESP + 0x8]                 ; 1000a24d
    PUSH 0x0                            ; 1000a251
    PUSH 0x0                            ; 1000a253
    PUSH 0x1                            ; 1000a255
    PUSH EAX                            ; 1000a257
    PUSH ECX                            ; 1000a258
    PUSH EDX                            ; 1000a259
    CALL ___strgtold12                  ; 1000a25a
        ;   XREF to: 1000c7b0 (UNCONDITIONAL_CALL)  ; uint ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, ...)
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000a25f
    LEA EDX,[ESP + 0x20]                ; 1000a263
    ADD ESP,0x1c                        ; 1000a267
    PUSH ECX                            ; 1000a26a
    PUSH EDX                            ; 1000a26b
    CALL FUN_1000a170                   ; 1000a26c
        ;   XREF to: 1000a170 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a170()
    ADD ESP,0x18                        ; 1000a271
    RET                                 ; 1000a274

