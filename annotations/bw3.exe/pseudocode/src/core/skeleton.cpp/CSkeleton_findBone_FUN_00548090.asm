; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   bone_name
; int              Stack[0xc]:4   assert_if_not_found
;
; XREF[43]:
;   core_asgaya.cpp_CAsgaya_setup_FUN_005a0b00 at 005a0b28
;   core_baal.cpp_CBaal_setup_FUN_00596730 at 00596780
;   core_bird.cpp_CBird_setup_FUN_0040fac0 at 0040fae8
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00417630 at 0041765c
;   core_carved.cpp_CCarved_setup_FUN_00425ab0 at 00425ad9
;   core_charactr.cpp_CCharacter_applyGesture_FUN_004320d0 at 0043210c
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 at 00433ff5
;   core_charactr.cpp_CCharacter_setup_FUN_0042b0e0 at 0042b18a
;   core_charactr.cpp_FUN_00432330 at 00432381
;   core_charactr.cpp_FUN_00433c60 at 00433d88
;   ... and 33 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005d1831
;   TerminatedCString s_Can_t_find_bone_s_in_ske_005d1846
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548090
        ;   Label: core_skeleton.cpp_CSkeleton_findBone_FUN_00548090
    PUSH ESI                            ; 00548091
    PUSH EDI                            ; 00548092
    PUSH EBP                            ; 00548093
    MOV EDI,dword ptr [ESP + 0x14]      ; 00548094
    MOV EBP,dword ptr [ESP + 0x18]      ; 00548098
    MOV EDX,dword ptr [EDI + 0x1de78]   ; 0054809c
    XOR EBX,EBX                         ; 005480a2
    TEST EDX,EDX                        ; 005480a4
    JLE 0x005480ca                      ; 005480a6
        ;   XREF to: 005480ca (CONDITIONAL_JUMP)  ; LAB_005480ca
    LEA ESI,[EDI + 0x1de7c]             ; 005480a8
    PUSH EBP                            ; 005480ae
        ;   Label: LAB_005480ae
    PUSH ESI                            ; 005480af
    CALL crt_string.c__stricmp_FUN_005a3260 ; 005480b0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 005480b5
    TEST EAX,EAX                        ; 005480b8
    JZ 0x005480db                       ; 005480ba
        ;   XREF to: 005480db (CONDITIONAL_JUMP)  ; LAB_005480db
    INC EBX                             ; 005480bc
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 005480bd
    ADD ESI,0x24                        ; 005480c3
    CMP EBX,ECX                         ; 005480c6
    JL 0x005480ae                       ; 005480c8
        ;   XREF to: 005480ae (CONDITIONAL_JUMP)  ; LAB_005480ae
    CMP dword ptr [ESP + 0x1c],0x0      ; 005480ca
        ;   Label: LAB_005480ca
    JNZ 0x005480e2                      ; 005480cf
        ;   XREF to: 005480e2 (CONDITIONAL_JUMP)  ; LAB_005480e2
    MOV EAX,0xffffffff                  ; 005480d1
    POP EBP                             ; 005480d6
    POP EDI                             ; 005480d7
    POP ESI                             ; 005480d8
    POP EBX                             ; 005480d9
    RET                                 ; 005480da
    MOV EAX,EBX                         ; 005480db
        ;   Label: LAB_005480db
    POP EBP                             ; 005480dd
    POP EDI                             ; 005480de
    POP ESI                             ; 005480df
    POP EBX                             ; 005480e0
    RET                                 ; 005480e1
    ADD EDI,0x1de28                     ; 005480e2
        ;   Label: LAB_005480e2
    PUSH EDI                            ; 005480e8
    PUSH EBP                            ; 005480e9
    MOV ESI,0x5d1831                    ; 005480ea | = "..\\core\\skeleton.cpp"
    MOV EAX,0x179                       ; 005480ef
    PUSH 0x5d1846                       ; 005480f4 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x01d71de0],ESI      ; 005480f9 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 005480ff | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00548104
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00548109
    MOV EAX,0xffffffff                  ; 0054810c
    POP EBP                             ; 00548111
    POP EDI                             ; 00548112
    POP ESI                             ; 00548113
    POP EBX                             ; 00548114
    RET                                 ; 00548115

