; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_advanceMotion_FUN_005d9970(CSvetlana *this_ptr,float delta_time)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d8c66
;
; Referenced Globals:
;   undefined4 g_SvetlanaBoneIndices[17]
;   undefined4 g_SvetlanaBoneIndices[18]
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d9970
        ;   Label: core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005d9970
    PUSH ESI                            ; 005d9971
    PUSH EDI                            ; 005d9972
    PUSH EBP                            ; 005d9973
    MOV EBP,ESP                         ; 005d9974
    AND ESP,0xfffffff8                  ; 005d9976
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d9979
    LEA ESI,[EBX + 0x158]               ; 005d997c
    LEA EAX,[EBP + 0x18]                ; 005d9982
        ;   Label: LAB_005d9982
    PUSH EAX                            ; 005d9985
    PUSH ESI                            ; 005d9986
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005d9987
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 005d998c
    MOV EDX,EAX                         ; 005d998f
    CMP EAX,0x64                        ; 005d9991
    JC 0x005d99eb                       ; 005d9994
        ;   XREF to: 005d99eb (CONDITIONAL_JUMP)  ; LAB_005d99eb
    JA 0x005d99f7                       ; 005d9996
        ;   XREF to: 005d99f7 (CONDITIONAL_JUMP)  ; LAB_005d99f7
    MOV EDI,dword ptr [0x03f6cbd4]      ; 005d9998 | g_SvetlanaBoneIndices[17]
    PUSH EDI                            ; 005d999e
    PUSH EBX                            ; 005d999f
    CALL core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10 ; 005d99a0
        ;   XREF to: 005d9a10 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10(CSvetlana * this_ptr, int bone_index)
    MOV EDX,dword ptr [EBX + 0x1fbd8]   ; 005d99a5
    ADD ESP,0x8                         ; 005d99ab
    TEST EDX,EDX                        ; 005d99ae
    SETZ AL                             ; 005d99b0
        ;   Label: LAB_005d99b0
    AND EAX,0xff                        ; 005d99b3
    MOV dword ptr [EBX + 0x1fbd8],EAX   ; 005d99b8
    FLD float ptr [EBP + 0x18]          ; 005d99be
        ;   Label: LAB_005d99be
    FLDZ                                ; 005d99c1
    FCOMPP                              ; 005d99c3
    FNSTSW AX                           ; 005d99c5
    SAHF                                ; 005d99c7
    JC 0x005d9982                       ; 005d99c8
        ;   XREF to: 005d9982 (CONDITIONAL_JUMP)  ; LAB_005d9982
    MOV ESP,EBP                         ; 005d99ca
    POP EBP                             ; 005d99cc
    POP EDI                             ; 005d99cd
    POP ESI                             ; 005d99ce
    POP EBX                             ; 005d99cf
    RET                                 ; 005d99d0
    MOV EDX,dword ptr [0x03f6cbd8]      ; 005d99d1 | g_SvetlanaBoneIndices[18]
        ;   Label: LAB_005d99d1
    PUSH EDX                            ; 005d99d7
    PUSH EBX                            ; 005d99d8
    CALL core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10 ; 005d99d9
        ;   XREF to: 005d9a10 (UNCONDITIONAL_CALL)  ; void core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_005d9a10(CSvetlana * this_ptr, int bone_index)
    MOV ECX,dword ptr [EBX + 0x1fbd8]   ; 005d99de
    ADD ESP,0x8                         ; 005d99e4
    TEST ECX,ECX                        ; 005d99e7
    JMP 0x005d99b0                      ; 005d99e9
        ;   XREF to: 005d99b0 (UNCONDITIONAL_JUMP)  ; LAB_005d99b0
    PUSH EDX                            ; 005d99eb
        ;   Label: LAB_005d99eb
    PUSH EBX                            ; 005d99ec
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005d99ed
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005d99f2
    JMP 0x005d99be                      ; 005d99f5
        ;   XREF to: 005d99be (UNCONDITIONAL_JUMP)  ; LAB_005d99be
    CMP EAX,0x65                        ; 005d99f7
        ;   Label: LAB_005d99f7
    JZ 0x005d99d1                       ; 005d99fa
        ;   XREF to: 005d99d1 (CONDITIONAL_JUMP)  ; LAB_005d99d1
    PUSH EDX                            ; 005d99fc
    PUSH EBX                            ; 005d99fd
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005d99fe
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 005d9a03
    JMP 0x005d99be                      ; 005d9a06
        ;   XREF to: 005d99be (UNCONDITIONAL_JUMP)  ; LAB_005d99be

