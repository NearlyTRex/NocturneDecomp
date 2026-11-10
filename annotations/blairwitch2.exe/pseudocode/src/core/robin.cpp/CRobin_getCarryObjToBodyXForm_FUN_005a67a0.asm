; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_robin_cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0(CRobin *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   TerminatedCString s_WOOD_BOWL_KFM_005f06be
;   TerminatedCString s_DOLL_KFM_005f06cc
;   undefined4 g_CBoxActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   crt_string.c__strcmp_FUN_005b8c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a67a0
        ;   Label: core_robin.cpp_CRobin_getCarryObjToBodyXForm_FUN_005a67a0
    PUSH EDI                            ; 005a67a1
    PUSH EBP                            ; 005a67a2
    MOV EBP,ESP                         ; 005a67a3
    SUB ESP,0x170                       ; 005a67a5
    SUB EBP,0x7a                        ; 005a67ab
    MOV EDI,dword ptr [EBP + 0x8a]      ; 005a67ae
    MOV EBX,ESI                         ; 005a67b4
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005a67b6
    MOV EDX,dword ptr [0x007bc9e8]      ; 005a67bc | g_CBoxActorClassInfo.name_hash
    SHL EAX,0x3                         ; 005a67c2
    PUSH EDX                            ; 005a67c5
    MOV EDX,EAX                         ; 005a67c6
    SHL EAX,0x4                         ; 005a67c8
    SUB EAX,EDX                         ; 005a67cb
    LEA EDX,[EDI + EAX*0x1]             ; 005a67cd
    MOV ECX,dword ptr [EDX + 0x2620]    ; 005a67d0
    PUSH ECX                            ; 005a67d6
    MOV dword ptr [EBP + 0x76],EDX      ; 005a67d7
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 005a67da
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 005a67df
    TEST EAX,EAX                        ; 005a67e2
    JZ 0x005a681d                       ; 005a67e4
        ;   XREF to: 005a681d (CONDITIONAL_JUMP)  ; LAB_005a681d
    PUSH 0x5f06be                       ; 005a67e6 | = "WOOD_BOWL.KFM"
    LEA ESI,[EAX + 0x32c]               ; 005a67eb
    PUSH ESI                            ; 005a67f1
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005a67f2
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    LEA EDX,[EDI + 0x1134]              ; 005a67f7
    ADD ESP,0x8                         ; 005a67fd
    MOV dword ptr [EBP + 0x72],EDX      ; 005a6800
    TEST EAX,EAX                        ; 005a6803
    JZ 0x005a685e                       ; 005a6805
        ;   XREF to: 005a685e (CONDITIONAL_JUMP)  ; LAB_005a685e
    PUSH 0x5f06cc                       ; 005a6807 | = "DOLL.KFM"
    PUSH ESI                            ; 005a680c
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 005a680d
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 005a6812
    TEST EAX,EAX                        ; 005a6815
    JZ 0x005a68e3                       ; 005a6817
        ;   XREF to: 005a68e3 (CONDITIONAL_JUMP)  ; LAB_005a68e3
    MOV ECX,dword ptr [EBP + 0x8e]      ; 005a681d
        ;   Label: LAB_005a681d
    PUSH ECX                            ; 005a6823
    PUSH EDI                            ; 005a6824
    LEA ESI,[EBP + 0xffffff3a]          ; 005a6825
    CALL core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120 ; 005a682b
        ;   XREF to: 00429120 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_charactr.cpp_CCharacter_getCarryObjToBodyXForm_FUN_00429120(CCharacter * this_ptr, int hand_index, CMatrix3x4f * out_matrix)
    MOV ECX,0xc                         ; 005a6830
    LEA EDI,[EBP + 0xffffff0a]          ; 005a6835
    LEA ESI,[EBP + 0xffffff3a]          ; 005a683b
    ADD ESP,0x8                         ; 005a6841
        ;   Label: LAB_005a6841
    MOVSD.REP ES:EDI,ESI                ; 005a6844
    MOV ECX,0xc                         ; 005a6846
    LEA ESI,[EBP + 0xffffff0a]          ; 005a684b
    MOV EDI,EBX                         ; 005a6851
    MOVSD.REP ES:EDI,ESI                ; 005a6853
    MOV EAX,EBX                         ; 005a6855
    LEA ESP,[EBP + 0x7a]                ; 005a6857
    POP EBP                             ; 005a685a
    POP EDI                             ; 005a685b
    POP EBX                             ; 005a685c
    RET                                 ; 005a685d
    MOV EDI,0xbfe00000                  ; 005a685e
        ;   Label: LAB_005a685e
    LEA ESI,[EBP + 0x2a]                ; 005a6863
    MOV EDX,0x3e4ccccd                  ; 005a6866
    MOV ECX,0xbda3d70a                  ; 005a686b
    MOV dword ptr [EBP + 0x2a],EAX      ; 005a6870
    MOV EAX,0xc0066666                  ; 005a6873
    MOV dword ptr [EBP + 0x32],EDI      ; 005a6878
    MOV dword ptr [EBP + 0x36],EDX      ; 005a687b
    MOV dword ptr [EBP + 0x2e],EAX      ; 005a687e
    LEA EAX,[EBP + 0x66]                ; 005a6881
    LEA EDI,[EBP + 0x66]                ; 005a6884
    PUSH EAX                            ; 005a6887
    LEA EAX,[EBP + 0x36]                ; 005a6888
    MOVSD ES:EDI,ESI                    ; 005a688b
    MOVSD ES:EDI,ESI                    ; 005a688c
    MOVSD ES:EDI,ESI                    ; 005a688d
    PUSH EAX                            ; 005a688e
    LEA EAX,[EBP + -0x66]               ; 005a688f
    XOR ESI,ESI                         ; 005a6892
    PUSH EAX                            ; 005a6894
    MOV dword ptr [EBP + 0x3a],ECX      ; 005a6895
    MOV dword ptr [EBP + 0x3e],ESI      ; 005a6898
    CALL core_xform.cpp_FUN_00591c10    ; 005a689b
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EDX,dword ptr [EBP + 0x76]      ; 005a68a0
    MOV EDX,dword ptr [EDX + 0x2618]    ; 005a68a3
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a68a9
    SUB EAX,EDX                         ; 005a68b0
    MOV EDI,dword ptr [EBP + 0x72]      ; 005a68b2
    SHL EAX,0x4                         ; 005a68b5
    ADD ESP,0xc                         ; 005a68b8
    ADD EAX,EDI                         ; 005a68bb
    PUSH EAX                            ; 005a68bd
    LEA EAX,[EBP + -0x66]               ; 005a68be
    PUSH EAX                            ; 005a68c1
    LEA ESI,[EBP + 0xffffff6a]          ; 005a68c2
    LEA EDI,[EBP + 0xffffff0a]          ; 005a68c8
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005a68ce
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005a68d3
    LEA ESI,[EBP + 0xffffff6a]          ; 005a68d8
    JMP 0x005a6841                      ; 005a68de
        ;   XREF to: 005a6841 (UNCONDITIONAL_JUMP)  ; LAB_005a6841
    MOV EAX,0x40400000                  ; 005a68e3
        ;   Label: LAB_005a68e3
    MOV EDX,0x3fe66666                  ; 005a68e8
    LEA EDI,[EBP + 0x5a]                ; 005a68ed
    LEA ESI,[EBP + 0x4e]                ; 005a68f0
    XOR ECX,ECX                         ; 005a68f3
    MOV dword ptr [EBP + 0x4e],EAX      ; 005a68f5
    LEA EAX,[EBP + 0x5a]                ; 005a68f8
    MOV dword ptr [EBP + 0x56],EDX      ; 005a68fb
    PUSH EAX                            ; 005a68fe
    MOV EAX,0x3dcccccd                  ; 005a68ff
    MOV dword ptr [EBP + 0x52],ECX      ; 005a6904
    MOV dword ptr [EBP + 0x4a],EAX      ; 005a6907
    LEA EAX,[EBP + 0x42]                ; 005a690a
    MOVSD ES:EDI,ESI                    ; 005a690d
    MOVSD ES:EDI,ESI                    ; 005a690e
    MOVSD ES:EDI,ESI                    ; 005a690f
    PUSH EAX                            ; 005a6910
    LEA EAX,[EBP + -0x6]                ; 005a6911
    MOV ESI,0x3e4ccccd                  ; 005a6914
    PUSH EAX                            ; 005a6919
    MOV dword ptr [EBP + 0x46],ECX      ; 005a691a
    MOV dword ptr [EBP + 0x42],ESI      ; 005a691d
    CALL core_xform.cpp_FUN_00591c10    ; 005a6920
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    MOV EDX,dword ptr [EBP + 0x76]      ; 005a6925
    MOV EDX,dword ptr [EDX + 0x2618]    ; 005a6928
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a692e
    SUB EAX,EDX                         ; 005a6935
    MOV EDX,dword ptr [EBP + 0x72]      ; 005a6937
    SHL EAX,0x4                         ; 005a693a
    ADD ESP,0xc                         ; 005a693d
    ADD EAX,EDX                         ; 005a6940
    PUSH EAX                            ; 005a6942
    LEA EAX,[EBP + -0x6]                ; 005a6943
    PUSH EAX                            ; 005a6946
    LEA ESI,[EBP + -0x36]               ; 005a6947
    LEA EDI,[EBP + 0xffffff0a]          ; 005a694a
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005a6950
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005916b0()
    MOV ECX,0xc                         ; 005a6955
    LEA ESI,[EBP + -0x36]               ; 005a695a
    JMP 0x005a6841                      ; 005a695d
        ;   XREF to: 005a6841 (UNCONDITIONAL_JUMP)  ; LAB_005a6841

