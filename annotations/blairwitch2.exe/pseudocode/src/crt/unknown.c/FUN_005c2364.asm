; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005c2364(int param_1,undefined1 *param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005c2310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2364
        ;   Label: crt_unknown.c_FUN_005c2364
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c2365
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c2369
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c236d
    MOV EDX,EBX                         ; 005c2371
    CMP ECX,0xa                         ; 005c2373
    JNZ 0x005c2384                      ; 005c2376
        ;   XREF to: 005c2384 (CONDITIONAL_JUMP)  ; LAB_005c2384
    TEST EAX,EAX                        ; 005c2378
    JGE 0x005c2384                      ; 005c237a
        ;   XREF to: 005c2384 (CONDITIONAL_JUMP)  ; LAB_005c2384
    NEG EAX                             ; 005c237c
    LEA EDX,[EBX + 0x1]                 ; 005c237e
    MOV byte ptr [EBX],0x2d             ; 005c2381
    PUSH ECX                            ; 005c2384
        ;   Label: LAB_005c2384
    PUSH EDX                            ; 005c2385
    PUSH EAX                            ; 005c2386
    CALL crt_unknown.c_FUN_005c2310     ; 005c2387
        ;   XREF to: 005c2310 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2310()
    ADD ESP,0xc                         ; 005c238c
    MOV EAX,EBX                         ; 005c238f
    POP EBX                             ; 005c2391
    RET                                 ; 005c2392

