; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00515080(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_00515850 at 005158c5
;   engine_mini3d.cpp_FUN_005159c0 at 00515a12
;   engine_mini3d.cpp_FUN_00517240 at 005172ec
;
; Referenced Globals:
;   void* PTR_caseD_1_0051506c = 0051512a
;   void* PTR_caseD_3_00515074 = 00515108
;   undefined4 DAT_01d227e8
;   undefined4 DAT_01d227ec
;   undefined4 DAT_01d22ffc
;   undefined4 DAT_01d23000
;   undefined4 DAT_01d23004
;   undefined4 DAT_01d2303c
;   undefined4 DAT_01d23044
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00514d40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515080
        ;   Label: engine_mini3d.cpp_FUN_00515080
    PUSH ESI                            ; 00515081
    PUSH EDI                            ; 00515082
    PUSH EBP                            ; 00515083
    SUB ESP,0x8                         ; 00515084
    MOV EBX,dword ptr [0x01d227ec]      ; 00515087 | DAT_01d227ec
    XOR EDX,EDX                         ; 0051508d
    MOV ECX,dword ptr [0x01d227e8]      ; 0051508f | DAT_01d227e8
    MOV dword ptr [ESP],EDX             ; 00515095
    TEST ECX,ECX                        ; 00515098
    JLE 0x0051511c                      ; 0051509a
        ;   XREF to: 0051511c (CONDITIONAL_JUMP)  ; LAB_0051511c
    MOV EBP,0x1d22ffc                   ; 005150a0
    MOV ECX,dword ptr [ESP]             ; 005150a5
        ;   Label: LAB_005150a5
    MOV EAX,[0x01d227e8]                ; 005150a8 | DAT_01d227e8
    INC ECX                             ; 005150ad
    CMP ECX,EAX                         ; 005150ae
    JNZ 0x005150b4                      ; 005150b0
        ;   XREF to: 005150b4 (CONDITIONAL_JUMP)  ; LAB_005150b4
    XOR ECX,EAX                         ; 005150b2
    MOV ESI,0x1d22ffc                   ; 005150b4
        ;   Label: LAB_005150b4
    SHL ECX,0x6                         ; 005150b9
    FLD float ptr [EBP]                 ; 005150bc | DAT_01d22ffc | DAT_01d2303c
    ADD ESI,ECX                         ; 005150bf
    MOV EDX,EBP                         ; 005150c1
    MOV dword ptr [ESP + 0x4],ESI       ; 005150c3
    XOR ECX,ECX                         ; 005150c7
    FCOMP float ptr [EBP + 0x8]         ; 005150c9 | DAT_01d23004 | DAT_01d23044
    FNSTSW AX                           ; 005150cc
    SAHF                                ; 005150ce
    JC 0x005150d6                       ; 005150cf
        ;   XREF to: 005150d6 (CONDITIONAL_JUMP)  ; LAB_005150d6
    MOV ECX,0x1                         ; 005150d1
    MOV ESI,dword ptr [ESP + 0x4]       ; 005150d6
        ;   Label: LAB_005150d6
    FLD float ptr [ESI]                 ; 005150da | DAT_01d22ffc
    FCOMP float ptr [ESI + 0x8]         ; 005150dc | DAT_01d23004
    FNSTSW AX                           ; 005150df
    SAHF                                ; 005150e1
    JC 0x005150e7                       ; 005150e2
        ;   XREF to: 005150e7 (CONDITIONAL_JUMP)  ; LAB_005150e7
    OR CL,0x2                           ; 005150e4
    CMP ECX,0x3                         ; 005150e7
        ;   Label: LAB_005150e7
    JA 0x00515108                       ; 005150ea
        ;   XREF to: 00515108 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x515068]  ; 005150ec | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 005150f3
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 005150f5
    MOV ECX,0x10                        ; 005150f8
    LEA EDI,[ESI + 0x1d227fc]           ; 005150fd
    MOV ESI,EDX                         ; 00515103
    INC EBX                             ; 00515105
    MOVSD.REP ES:EDI,ESI                ; 00515106 | DAT_01d22ffc | DAT_01d23000
    MOV ESI,dword ptr [ESP]             ; 00515108
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d227e8]      ; 0051510b | DAT_01d227e8
    INC ESI                             ; 00515111
    ADD EBP,0x40                        ; 00515112
    MOV dword ptr [ESP],ESI             ; 00515115
    CMP ESI,EDI                         ; 00515118
    JL 0x005150a5                       ; 0051511a
        ;   XREF to: 005150a5 (CONDITIONAL_JUMP)  ; LAB_005150a5
    MOV dword ptr [0x01d227ec],EBX      ; 0051511c | DAT_01d227ec
        ;   Label: LAB_0051511c
    ADD ESP,0x8                         ; 00515122
    POP EBP                             ; 00515125
    POP EDI                             ; 00515126
    POP ESI                             ; 00515127
    POP EBX                             ; 00515128
    RET                                 ; 00515129
    MOV ECX,EBX                         ; 0051512a
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 0051512c
    ADD ECX,0x1d227fc                   ; 0051512f
    PUSH ECX                            ; 00515135
    PUSH EDX                            ; 00515136 | DAT_01d22ffc
    MOV ESI,dword ptr [ESP + 0xc]       ; 00515137
    PUSH ESI                            ; 0051513b
    MOV dword ptr [0x01d227ec],EBX      ; 0051513c | DAT_01d227ec
    CALL engine_mini3d.cpp_FUN_00514d40 ; 00515142
        ;   XREF to: 00514d40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00514d40()
    MOV EBX,dword ptr [0x01d227ec]      ; 00515147 | DAT_01d227ec
    ADD ESP,0xc                         ; 0051514d
    INC EBX                             ; 00515150
    JMP 0x00515108                      ; 00515151
        ;   XREF to: 00515108 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 00515153
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 00515155
    MOV ECX,0x10                        ; 00515158
    LEA EDI,[ESI + 0x1d227fc]           ; 0051515d
    MOV ESI,EDX                         ; 00515163
    INC EBX                             ; 00515165
    MOVSD.REP ES:EDI,ESI                ; 00515166 | DAT_01d22ffc | DAT_01d23000
    MOV ECX,EBX                         ; 00515168
    SHL ECX,0x6                         ; 0051516a
    ADD ECX,0x1d227fc                   ; 0051516d
    PUSH ECX                            ; 00515173
    MOV ECX,dword ptr [ESP + 0x8]       ; 00515174
    PUSH ECX                            ; 00515178
    PUSH EDX                            ; 00515179 | DAT_01d22ffc
    MOV dword ptr [0x01d227ec],EBX      ; 0051517a | DAT_01d227ec
    CALL engine_mini3d.cpp_FUN_00514d40 ; 00515180
        ;   XREF to: 00514d40 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00514d40()
    MOV EBX,dword ptr [0x01d227ec]      ; 00515185 | DAT_01d227ec
    ADD ESP,0xc                         ; 0051518b
    INC EBX                             ; 0051518e
    JMP 0x00515108                      ; 0051518f
        ;   XREF to: 00515108 (UNCONDITIONAL_JUMP)  ; caseD_3

