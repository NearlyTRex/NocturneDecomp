; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_ground_cpp_getGroundTypeColor_FUN_004b12f0(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; Referenced Globals:
;   void* switchdataD_004b12b0 = 004b1301
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b12f0
        ;   Label: core_ground.cpp_getGroundTypeColor_FUN_004b12f0
    DEC EAX                             ; 004b12f4
    CMP EAX,0xc                         ; 004b12f5
    JA 0x004b1343                       ; 004b12f8
        ;   XREF to: 004b1343 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b12b0]  ; 004b12fa | caseD_1 | caseD_5 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5                         ; 004b1301
        ;   Label: caseD_1
    RET                                 ; 004b1306
    MOV EAX,0xf8                        ; 004b1307
        ;   Label: caseD_2
    RET                                 ; 004b130c
    MOV EAX,0x2                         ; 004b130d
        ;   Label: caseD_3
    RET                                 ; 004b1312
    MOV EAX,0xfa                        ; 004b1313
        ;   Label: caseD_4
    RET                                 ; 004b1318
    MOV EAX,0x4                         ; 004b1319
        ;   Label: caseD_6
    RET                                 ; 004b131e
    MOV EAX,0x3                         ; 004b131f
        ;   Label: caseD_7
    RET                                 ; 004b1324
    MOV EAX,0x6                         ; 004b1325
        ;   Label: caseD_8
    RET                                 ; 004b132a
    MOV EAX,0x1                         ; 004b132b
        ;   Label: caseD_9
    RET                                 ; 004b1330
    MOV EAX,0xf9                        ; 004b1331
        ;   Label: caseD_a
    RET                                 ; 004b1336
    MOV EAX,0xfc                        ; 004b1337
        ;   Label: caseD_c
    RET                                 ; 004b133c
    MOV EAX,0x7                         ; 004b133d
        ;   Label: caseD_d
    RET                                 ; 004b1342
    MOV EAX,0xfd                        ; 004b1343
        ;   Label: default
    RET                                 ; 004b1348

