; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(CSkeleton *this_ptr,char *bone_name,int assert_if_not_found)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   bone_name
; int              Stack[0xc]:4   assert_if_not_found
;
; XREF[39]:
;   core_baron.cpp_CBaron_setup_FUN_004102c0 at 004102e8
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412192
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134d2
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 00418829
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fc4c
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042add0 at 0042ae13
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 at 0042ac66
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 004242fd
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_004363e0 at 00436426
;   core_colonel.cpp_CColonel_setup_FUN_00439da0 at 00439dc8
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005913b0
;   TerminatedCString s_Can_t_find_bone_s_in_ske_005913c5
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005179d0
        ;   Label: core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
    PUSH ESI                            ; 005179d1
    PUSH EDI                            ; 005179d2
    PUSH EBP                            ; 005179d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005179d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005179d8
    MOV EDX,dword ptr [EDI + 0x28558]   ; 005179dc
    XOR EBX,EBX                         ; 005179e2
    TEST EDX,EDX                        ; 005179e4
    JLE 0x00517a0a                      ; 005179e6
        ;   XREF to: 00517a0a (CONDITIONAL_JUMP)  ; LAB_00517a0a
    LEA ESI,[EDI + 0x2855c]             ; 005179e8
    PUSH EBP                            ; 005179ee
        ;   Label: LAB_005179ee
    PUSH ESI                            ; 005179ef
    CALL crt_string.c__stricmp_FUN_00564520 ; 005179f0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 005179f5
    TEST EAX,EAX                        ; 005179f8
    JZ 0x00517a1b                       ; 005179fa
        ;   XREF to: 00517a1b (CONDITIONAL_JUMP)  ; LAB_00517a1b
    INC EBX                             ; 005179fc
    MOV ECX,dword ptr [EDI + 0x28558]   ; 005179fd
    ADD ESI,0x24                        ; 00517a03
    CMP EBX,ECX                         ; 00517a06
    JL 0x005179ee                       ; 00517a08
        ;   XREF to: 005179ee (CONDITIONAL_JUMP)  ; LAB_005179ee
    CMP dword ptr [ESP + 0x1c],0x0      ; 00517a0a
        ;   Label: LAB_00517a0a
    JNZ 0x00517a22                      ; 00517a0f
        ;   XREF to: 00517a22 (CONDITIONAL_JUMP)  ; LAB_00517a22
    MOV EAX,0xffffffff                  ; 00517a11
    POP EBP                             ; 00517a16
    POP EDI                             ; 00517a17
    POP ESI                             ; 00517a18
    POP EBX                             ; 00517a19
    RET                                 ; 00517a1a
    MOV EAX,EBX                         ; 00517a1b
        ;   Label: LAB_00517a1b
    POP EBP                             ; 00517a1d
    POP EDI                             ; 00517a1e
    POP ESI                             ; 00517a1f
    POP EBX                             ; 00517a20
    RET                                 ; 00517a21
    ADD EDI,0x28508                     ; 00517a22
        ;   Label: LAB_00517a22
    PUSH EDI                            ; 00517a28
    PUSH EBP                            ; 00517a29
    MOV ESI,0x5913b0                    ; 00517a2a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x16d                       ; 00517a2f
    PUSH 0x5913c5                       ; 00517a34 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x01cc4800],ESI      ; 00517a39 | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00517a3f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00517a44
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00517a49
    MOV EAX,0xffffffff                  ; 00517a4c
    POP EBP                             ; 00517a51
    POP EDI                             ; 00517a52
    POP ESI                             ; 00517a53
    POP EBX                             ; 00517a54
    RET                                 ; 00517a55

