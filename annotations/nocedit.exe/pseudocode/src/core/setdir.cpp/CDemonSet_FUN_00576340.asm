; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_setdir_cpp_CDemonSet_FUN_00576340(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005836c6
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_FUN_005762a0
;   core_setdir.cpp_CDemonSet_FUN_00576820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576340
        ;   Label: core_setdir.cpp_CDemonSet_FUN_00576340
    PUSH ESI                            ; 00576341
    PUSH EDI                            ; 00576342
    PUSH EBP                            ; 00576343
    MOV ESI,dword ptr [ESP + 0x14]      ; 00576344
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00576348
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057634c
    PUSH EDX                            ; 00576350
    PUSH ESI                            ; 00576351
    XOR EBX,EBX                         ; 00576352
    CALL core_setdir.cpp_CDemonSet_FUN_00576820 ; 00576354
        ;   XREF to: 00576820 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 00576359
    MOV ECX,dword ptr [ESI + 0x15b410]  ; 0057635c
    MOV EDI,EAX                         ; 00576362
    TEST ECX,ECX                        ; 00576364
    JLE 0x0057637f                      ; 00576366
        ;   XREF to: 0057637f (CONDITIONAL_JUMP)  ; LAB_0057637f
    PUSH EBX                            ; 00576368
        ;   Label: LAB_00576368
    PUSH ESI                            ; 00576369
    CALL core_setdir.cpp_CDemonSet_FUN_00576820 ; 0057636a
        ;   XREF to: 00576820 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_00576820(CDemonSet * this_ptr)
    ADD ESP,0x8                         ; 0057636f
    CMP EAX,EDI                         ; 00576372
    JZ 0x00576386                       ; 00576374
        ;   XREF to: 00576386 (CONDITIONAL_JUMP)  ; LAB_00576386
    INC EBX                             ; 00576376
        ;   Label: LAB_00576376
    CMP EBX,dword ptr [ESI + 0x15b410]  ; 00576377
    JL 0x00576368                       ; 0057637d
        ;   XREF to: 00576368 (CONDITIONAL_JUMP)  ; LAB_00576368
    XOR EAX,EAX                         ; 0057637f
        ;   Label: LAB_0057637f
    POP EBP                             ; 00576381
    POP EDI                             ; 00576382
    POP ESI                             ; 00576383
    POP EBX                             ; 00576384
    RET                                 ; 00576385
    PUSH EBP                            ; 00576386
        ;   Label: LAB_00576386
    PUSH EBX                            ; 00576387
    PUSH ESI                            ; 00576388
    CALL core_setdir.cpp_CDemonSet_FUN_005762a0 ; 00576389
        ;   XREF to: 005762a0 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_FUN_005762a0(CDemonSet * this_ptr)
    ADD ESP,0xc                         ; 0057638e
    TEST EAX,EAX                        ; 00576391
    JZ 0x00576376                       ; 00576393
        ;   XREF to: 00576376 (CONDITIONAL_JUMP)  ; LAB_00576376
    MOV EAX,0x1                         ; 00576395
    POP EBP                             ; 0057639a
    POP EDI                             ; 0057639b
    POP ESI                             ; 0057639c
    POP EBX                             ; 0057639d
    RET                                 ; 0057639e

