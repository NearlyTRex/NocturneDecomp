; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton *this_ptr,char *bone_name)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   bone_name
;
; XREF[39]:
;   core_baron.cpp_CBaron_setup_FUN_00412cb0 at 00412d80
;   core_batcreat.cpp_CBatCreature_setup_FUN_00415150 at 00415200
;   core_batman.cpp_CBatman_setup_FUN_00416510 at 004165c0
;   core_boneguy.cpp_CBoneGuy_setup_FUN_0041bd90 at 0041bea0
;   core_bride.cpp_CBride_setup_FUN_00423810 at 0042383c
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 at 0042ec83
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042ea40 at 0042ebc4
;   core_cloth.cpp_CCloth_orientBoneToChild_FUN_0043a110 at 0043a156
;   core_colonel.cpp_CColonel_setup_FUN_0043f850 at 0043f920
;   core_cow.cpp_CZombieCow_setup_FUN_004441b0 at 004441ef
;   ... and 29 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e482
;   TerminatedCString s_Can_t_find_bone_s_in_ske_0064e497
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599fc0
        ;   Label: core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
    PUSH ESI                            ; 00599fc1
    PUSH EDI                            ; 00599fc2
    PUSH EBP                            ; 00599fc3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00599fc4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00599fc8
    MOV EDX,dword ptr [EDI + 0x28558]   ; 00599fcc
    XOR EBX,EBX                         ; 00599fd2
    TEST EDX,EDX                        ; 00599fd4
    JLE 0x00599ffa                      ; 00599fd6
        ;   XREF to: 00599ffa (CONDITIONAL_JUMP)  ; LAB_00599ffa
    LEA ESI,[EDI + 0x2855c]             ; 00599fd8
    PUSH EBP                            ; 00599fde
        ;   Label: LAB_00599fde
    PUSH ESI                            ; 00599fdf
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 00599fe0
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 00599fe5
    TEST EAX,EAX                        ; 00599fe8
    JZ 0x0059a00b                       ; 00599fea
        ;   XREF to: 0059a00b (CONDITIONAL_JUMP)  ; LAB_0059a00b
    INC EBX                             ; 00599fec
    MOV ECX,dword ptr [EDI + 0x28558]   ; 00599fed
    ADD ESI,0x24                        ; 00599ff3
    CMP EBX,ECX                         ; 00599ff6
    JL 0x00599fde                       ; 00599ff8
        ;   XREF to: 00599fde (CONDITIONAL_JUMP)  ; LAB_00599fde
    CMP dword ptr [ESP + 0x1c],0x0      ; 00599ffa
        ;   Label: LAB_00599ffa
    JNZ 0x0059a012                      ; 00599fff
        ;   XREF to: 0059a012 (CONDITIONAL_JUMP)  ; LAB_0059a012
    MOV EAX,0xffffffff                  ; 0059a001
    POP EBP                             ; 0059a006
    POP EDI                             ; 0059a007
    POP ESI                             ; 0059a008
    POP EBX                             ; 0059a009
    RET                                 ; 0059a00a
    MOV EAX,EBX                         ; 0059a00b
        ;   Label: LAB_0059a00b
    POP EBP                             ; 0059a00d
    POP EDI                             ; 0059a00e
    POP ESI                             ; 0059a00f
    POP EBX                             ; 0059a010
    RET                                 ; 0059a011
    ADD EDI,0x28508                     ; 0059a012
        ;   Label: LAB_0059a012
    PUSH EDI                            ; 0059a018
    PUSH EBP                            ; 0059a019
    MOV ESI,0x64e482                    ; 0059a01a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x16d                       ; 0059a01f
    PUSH 0x64e497                       ; 0059a024 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x02f0ca48],ESI      ; 0059a029 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0059a02f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0059a034
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 0059a039
    MOV EAX,0xffffffff                  ; 0059a03c
    POP EBP                             ; 0059a041
    POP EDI                             ; 0059a042
    POP ESI                             ; 0059a043
    POP EBX                             ; 0059a044
    RET                                 ; 0059a045

