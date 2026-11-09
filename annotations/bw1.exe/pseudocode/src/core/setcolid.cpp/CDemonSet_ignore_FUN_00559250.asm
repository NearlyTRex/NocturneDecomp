; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[48]:
;   core_actor.cpp_FUN_00408a00 at 00408a26
;   core_actor.cpp_FUN_00409f20 at 0040a53b
;   core_actor.cpp_FUN_0040c6a0 at 0040c6fe
;   core_actor.cpp_FUN_0040c750 at 0040c7cb
;   core_boneguy.cpp_FUN_0041bb40 at 0041c03f
;   core_carved.cpp_FUN_00428ae0 at 00429750
;   core_charactr.cpp_FUN_0042d750 at 0042d8a2
;   core_charactr.cpp_FUN_00432f10 at 004334d7
;   core_cow.cpp_FUN_00448570 at 004486c4
;   core_crossbow.cpp_FUN_00449a50 at 00449c22
;   ... and 38 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0f4b
;   TerminatedCString s_CDemonSet_ignore_ignore_005f0f60
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559250
        ;   Label: core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
    PUSH EBP                            ; 00559251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00559252
    CMP dword ptr [ESP + 0x10],0x0      ; 00559256
    JZ 0x00559283                       ; 0055925b
        ;   XREF to: 00559283 (CONDITIONAL_JUMP)  ; LAB_00559283
    MOV ECX,dword ptr [EBX + 0x15f6ac]  ; 0055925d
    TEST ECX,ECX                        ; 00559263
    JL 0x00559283                       ; 00559265
        ;   XREF to: 00559283 (CONDITIONAL_JUMP)  ; LAB_00559283
    CMP ECX,0xa                         ; 00559267
    JGE 0x00559286                      ; 0055926a
        ;   XREF to: 00559286 (CONDITIONAL_JUMP)  ; LAB_00559286
    MOV EAX,dword ptr [EBX + 0x15f6ac]  ; 0055926c
        ;   Label: LAB_0055926c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00559272
    MOV dword ptr [EBX + EAX*0x4 + 0x15f6b4],EDX ; 00559276
    INC dword ptr [EBX + 0x15f6ac]      ; 0055927d
    POP EBP                             ; 00559283
        ;   Label: LAB_00559283
    POP EBX                             ; 00559284
    RET                                 ; 00559285
    PUSH EDI                            ; 00559286
        ;   Label: LAB_00559286
    MOV EDI,0x5f0f4b                    ; 00559287 | = "..\\core\\setcolid.cpp"
    MOV EBP,0x473                       ; 0055928c
    PUSH 0x5f0f60                       ; 00559291 | = "CDemonSet::ignore - ignore list is full"
    MOV dword ptr [0x01d1d400],EDI      ; 00559296 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0055929c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005592a2
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005592a7
    POP EDI                             ; 005592aa
    JMP 0x0055926c                      ; 005592ab
        ;   XREF to: 0055926c (UNCONDITIONAL_JUMP)  ; LAB_0055926c

