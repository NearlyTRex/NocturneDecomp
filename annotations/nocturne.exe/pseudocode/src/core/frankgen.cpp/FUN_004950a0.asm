; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004950a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_004946c0 at 00494767
;   FUN_00494950 at 004949a4
;   FUN_00494e80 at 00494eac
;
; Referenced Globals:
;   void* switchdataD_00495078 = 004950c1
;   string s_..\\core\\frankgen.cpp_00581d58
;   undefined4 DAT_00581d6d
;   undefined4 DAT_0059db58
;   undefined4 DAT_0059db70
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_0040a000
;   FUN_0040a240
;   FUN_00453080
;   FUN_00454530
;   FUN_004952b0
;   FUN_00495340
;   FUN_004c8440
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004950a0
        ;   Label: FUN_004950a0
    PUSH ESI                            ; 004950a1
    PUSH EDI                            ; 004950a2
    PUSH EBP                            ; 004950a3
    SUB ESP,0x28                        ; 004950a4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004950a7
    MOV EAX,dword ptr [EBP + 0x150]     ; 004950ab
    CMP EAX,0x8                         ; 004950b1
    JA 0x004951fc                       ; 004950b4
        ;   XREF to: 004951fc (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x495078]  ; 004950ba | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH dword ptr [0x0059db70]         ; 004950c1 | DAT_0059db70
        ;   Label: caseD_0
    PUSH 0x0                            ; 004950c7
    PUSH EBP                            ; 004950c9
        ;   Label: LAB_004950c9
    CALL FUN_00495340                   ; 004950ca
        ;   XREF to: 00495340 (UNCONDITIONAL_CALL)  ; undefined FUN_00495340()
    ADD ESP,0xc                         ; 004950cf
        ;   Label: LAB_004950cf
    PUSH EBP                            ; 004950d2
        ;   Label: LAB_004950d2
    CALL FUN_0040a000                   ; 004950d3
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a000()
    FLD float ptr [EBP + 0x178]         ; 004950d8
    ADD ESP,0x4                         ; 004950de
    CALL FUN_00563a30                   ; 004950e1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x24]        ; 004950e6
    MOV EBX,dword ptr [ESP + 0x24]      ; 004950ea
    MOV EDX,dword ptr [EBP + 0x480]     ; 004950ee
    PUSH EBX                            ; 004950f4
    LEA EAX,[EBP + 0x17c]               ; 004950f5
    LEA ESI,[EDX*0x4 + 0x0]             ; 004950fb
    PUSH EAX                            ; 00495102
    SUB ESI,EDX                         ; 00495103
    CALL FUN_00454530                   ; 00495105
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    ADD ESP,0x4                         ; 0049510a
    LEA EDI,[ESP + 0x10]                ; 0049510d
    PUSH EAX                            ; 00495111
    SHL ESI,0x2                         ; 00495112
    LEA EBX,[ESP + 0x20]                ; 00495115
    CALL FUN_00453080                   ; 00495119
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; undefined FUN_00453080()
    ADD ESI,EAX                         ; 0049511e
    ADD ESP,0x8                         ; 00495120
    LEA EAX,[ESP + 0xc]                 ; 00495123
    MOVSD ES:EDI,ESI                    ; 00495127
    MOVSD ES:EDI,ESI                    ; 00495128
    MOVSD ES:EDI,ESI                    ; 00495129
    FILD dword ptr [EAX]                ; 0049512a
    FMUL float ptr [0x0059db58]         ; 0049512c | DAT_0059db58
    FSTP float ptr [EBX]                ; 00495132
    FILD dword ptr [EAX + 0x4]          ; 00495134
    FMUL float ptr [0x0059db58]         ; 00495137 | DAT_0059db58
    FSTP float ptr [EBX + 0x4]          ; 0049513d
    FILD dword ptr [EAX + 0x8]          ; 00495140
    FMUL float ptr [0x0059db58]         ; 00495143 | DAT_0059db58
    FSTP float ptr [EBX + 0x8]          ; 00495149
    LEA EAX,[ESP + 0x18]                ; 0049514c
    PUSH EAX                            ; 00495150
    LEA EAX,[ESP + 0x4]                 ; 00495151
    PUSH EAX                            ; 00495155
    PUSH EBP                            ; 00495156
    CALL FUN_0040a240                   ; 00495157
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD EBP,0x488                       ; 0049515c
    ADD ESP,0xc                         ; 00495162
    CMP EBP,EAX                         ; 00495165
    JNZ 0x00495224                      ; 00495167
        ;   XREF to: 00495224 (CONDITIONAL_JUMP)  ; LAB_00495224
    ADD ESP,0x28                        ; 0049516d
    POP EBP                             ; 00495170
        ;   Label: LAB_00495170
    POP EDI                             ; 00495171
    POP ESI                             ; 00495172
    POP EBX                             ; 00495173
    RET                                 ; 00495174
    PUSH 0x4427c000                     ; 00495175
        ;   Label: caseD_1
    PUSH 0x43030000                     ; 0049517a
    PUSH EBP                            ; 0049517f
    CALL FUN_004952b0                   ; 00495180
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004952b0()
    JMP 0x004950cf                      ; 00495185
        ;   XREF to: 004950cf (UNCONDITIONAL_JUMP)  ; LAB_004950cf
    PUSH 0x445dc000                     ; 0049518a
        ;   Label: caseD_2
    PUSH 0x4403c000                     ; 0049518f
    PUSH EBP                            ; 00495194
    CALL FUN_004952b0                   ; 00495195
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004952b0()
    JMP 0x004950cf                      ; 0049519a
        ;   XREF to: 004950cf (UNCONDITIONAL_JUMP)  ; LAB_004950cf
    PUSH 0x44d9a000                     ; 0049519f
        ;   Label: caseD_3
    PUSH 0x44882000                     ; 004951a4
    PUSH EBP                            ; 004951a9
    CALL FUN_004952b0                   ; 004951aa
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004952b0()
    JMP 0x004950cf                      ; 004951af
        ;   XREF to: 004950cf (UNCONDITIONAL_JUMP)  ; LAB_004950cf
    PUSH 0x43c80000                     ; 004951b4
        ;   Label: caseD_4
    PUSH 0x43af0000                     ; 004951b9
    PUSH EBP                            ; 004951be
    CALL FUN_004952b0                   ; 004951bf
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004952b0()
    JMP 0x004950cf                      ; 004951c4
        ;   XREF to: 004950cf (UNCONDITIONAL_JUMP)  ; LAB_004950cf
    PUSH 0x44828000                     ; 004951c9
        ;   Label: caseD_5
    PUSH 0x44580000                     ; 004951ce
    PUSH EBP                            ; 004951d3
    CALL FUN_004952b0                   ; 004951d4
        ;   XREF to: 004952b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004952b0()
    JMP 0x004950cf                      ; 004951d9
        ;   XREF to: 004950cf (UNCONDITIONAL_JUMP)  ; LAB_004950cf
    PUSH 0x44f14000                     ; 004951de
        ;   Label: caseD_6
    PUSH 0x44d4a000                     ; 004951e3
    JMP 0x004950c9                      ; 004951e8
        ;   XREF to: 004950c9 (UNCONDITIONAL_JUMP)  ; LAB_004950c9
    PUSH 0x450fc000                     ; 004951ed
        ;   Label: caseD_8
    PUSH 0x44f3a000                     ; 004951f2
    JMP 0x004950c9                      ; 004951f7
        ;   XREF to: 004950c9 (UNCONDITIONAL_JUMP)  ; LAB_004950c9
    MOV EDX,0x581d58                    ; 004951fc | = "..\\core\\frankgen.cpp"
        ;   Label: default
    MOV ECX,0x1bb                       ; 00495201
    PUSH 0x581d6d                       ; 00495206 | DAT_00581d6d
    MOV dword ptr [0x01cc4800],EDX      ; 0049520b | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00495211 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00495217
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0049521c
    JMP 0x004950d2                      ; 0049521f
        ;   XREF to: 004950d2 (UNCONDITIONAL_JUMP)  ; LAB_004950d2
    MOV EDX,dword ptr [EAX]             ; 00495224
        ;   Label: LAB_00495224
    MOV dword ptr [EBP],EDX             ; 00495226
    MOV EDX,dword ptr [EAX + 0x4]       ; 00495229
    MOV dword ptr [EBP + 0x4],EDX       ; 0049522c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049522f
    MOV dword ptr [EBP + 0x8],EDX       ; 00495232
    ADD ESP,0x28                        ; 00495235
    POP EBP                             ; 00495238
    POP EDI                             ; 00495239
    POP ESI                             ; 0049523a
    POP EBX                             ; 0049523b
    RET                                 ; 0049523c

