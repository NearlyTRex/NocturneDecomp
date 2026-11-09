; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_FUN_004cf9a0(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; XREF[2]:
;   core_actor.cpp_FUN_0040cab0 at 0040cd0b
;   core_fire.cpp_FUN_004a2090 at 004a22a5
;
; Referenced Globals:
;   void* switchdataD_004cf960 = 004cf9b1
;   undefined4 DAT_005c486c
;   undefined4 DAT_005c486f
;   undefined4 DAT_005c4872
;   undefined4 DAT_005c4875
;   undefined4 DAT_005c4878
;   undefined4 DAT_005c487b
;   undefined4 DAT_005c487e
;   undefined4 DAT_005c4881
;   undefined4 DAT_005c4884
;   undefined4 DAT_005c4887
;   undefined4 DAT_005c488a
;   undefined4 DAT_005c488d
;   undefined4 DAT_005c4890
;   undefined4 DAT_005c4893
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf9a0
        ;   Label: core_ground.cpp_FUN_004cf9a0
    DEC EAX                             ; 004cf9a4
    CMP EAX,0xd                         ; 004cf9a5
    JA 0x004cfa05                       ; 004cf9a8
        ;   XREF to: 004cfa05 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4cf960]  ; 004cf9aa | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5c486c                    ; 004cf9b1 | DAT_005c486c
        ;   Label: caseD_1
    RET                                 ; 004cf9b6
    MOV EAX,0x5c486f                    ; 004cf9b7 | DAT_005c486f
        ;   Label: caseD_2
    RET                                 ; 004cf9bc
    MOV EAX,0x5c4872                    ; 004cf9bd | DAT_005c4872
        ;   Label: caseD_3
    RET                                 ; 004cf9c2
    MOV EAX,0x5c4875                    ; 004cf9c3 | DAT_005c4875
        ;   Label: caseD_4
    RET                                 ; 004cf9c8
    MOV EAX,0x5c4878                    ; 004cf9c9 | DAT_005c4878
        ;   Label: caseD_5
    RET                                 ; 004cf9ce
    MOV EAX,0x5c487b                    ; 004cf9cf | DAT_005c487b
        ;   Label: caseD_6
    RET                                 ; 004cf9d4
    MOV EAX,0x5c487e                    ; 004cf9d5 | DAT_005c487e
        ;   Label: caseD_7
    RET                                 ; 004cf9da
    MOV EAX,0x5c4881                    ; 004cf9db | DAT_005c4881
        ;   Label: caseD_8
    RET                                 ; 004cf9e0
    MOV EAX,0x5c4884                    ; 004cf9e1 | DAT_005c4884
        ;   Label: caseD_9
    RET                                 ; 004cf9e6
    MOV EAX,0x5c4887                    ; 004cf9e7 | DAT_005c4887
        ;   Label: caseD_a
    RET                                 ; 004cf9ec
    MOV EAX,0x5c488a                    ; 004cf9ed | DAT_005c488a
        ;   Label: caseD_b
    RET                                 ; 004cf9f2
    MOV EAX,0x5c488d                    ; 004cf9f3 | DAT_005c488d
        ;   Label: caseD_c
    RET                                 ; 004cf9f8
    MOV EAX,0x5c4890                    ; 004cf9f9 | DAT_005c4890
        ;   Label: caseD_d
    RET                                 ; 004cf9fe
    MOV EAX,0x5c4893                    ; 004cf9ff | DAT_005c4893
        ;   Label: caseD_e
    RET                                 ; 004cfa04
    MOV EAX,0x5c4896                    ; 004cfa05 | DAT_005c4896
        ;   Label: default
    RET                                 ; 004cfa0a

