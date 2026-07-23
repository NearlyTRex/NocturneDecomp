; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_dismountVehicle_FUN_004da670(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004da790 at 004db144
;
; Referenced Globals:
;   double DOUBLE_0058a2e9 = 1.57079632675000
;   double DOUBLE_0058a2f1 = -1.57079632675000
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da670
        ;   Label: core_mobster.cpp_CMobster_dismountVehicle_FUN_004da670
    PUSH ESI                            ; 004da671
    PUSH EDI                            ; 004da672
    SUB ESP,0x30                        ; 004da673
    MOV EBX,dword ptr [ESP + 0x40]      ; 004da676
    CMP dword ptr [EBX + 0xbd4c],0x0    ; 004da67a
    JZ 0x004da719                       ; 004da681
        ;   XREF to: 004da719 (CONDITIONAL_JUMP)  ; LAB_004da719
    MOV ESI,0xc0166666                  ; 004da687
    MOV EDI,0xbfcccccd                  ; 004da68c
    MOV ECX,0xc0866666                  ; 004da691
    MOV EAX,ESP                         ; 004da696
    LEA EDX,[ESP + 0x18]                ; 004da698
    MOV dword ptr [ESP + 0x4],ESI       ; 004da69c
    MOV dword ptr [ESP + 0x8],EDI       ; 004da6a0
    MOV dword ptr [ESP],ECX             ; 004da6a4
    CMP EDX,EAX                         ; 004da6a7
    JZ 0x004da6b7                       ; 004da6a9
        ;   XREF to: 004da6b7 (CONDITIONAL_JUMP)  ; LAB_004da6b7
    MOV dword ptr [ESP + 0x1c],ESI      ; 004da6ab
    MOV dword ptr [ESP + 0x20],EDI      ; 004da6af
    MOV dword ptr [ESP + 0x18],ECX      ; 004da6b3
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004da6b7
        ;   Label: LAB_004da6b7
    FLD float ptr [EAX + 0x34]          ; 004da6bd
    FADD double ptr [0x0058a2f1]        ; 004da6c0 | DOUBLE_0058a2f1
    FSTP float ptr [EBX + 0x34]         ; 004da6c6
        ;   Label: LAB_004da6c6
    LEA EAX,[ESP + 0x18]                ; 004da6c9
    PUSH EAX                            ; 004da6cd
    LEA EAX,[ESP + 0x10]                ; 004da6ce
    PUSH EAX                            ; 004da6d2
    MOV ECX,dword ptr [EBX + 0xbd48]    ; 004da6d3
    PUSH ECX                            ; 004da6d9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004da6da
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    LEA EDX,[EBX + 0x20]                ; 004da6df
    FLD float ptr [EAX]                 ; 004da6e2
    ADD ESP,0xc                         ; 004da6e4
    FSTP float ptr [EDX]                ; 004da6e7
    PUSH 0x1                            ; 004da6e9
    ADD EBX,0x150                       ; 004da6eb
    MOV ECX,dword ptr [EAX + 0x4]       ; 004da6f1
    MOV dword ptr [EDX + 0x4],ECX       ; 004da6f4
    PUSH 0x8                            ; 004da6f7
    FLD float ptr [EAX + 0x8]           ; 004da6f9
    PUSH EBX                            ; 004da6fc
    FSTP float ptr [EDX + 0x8]          ; 004da6fd
    MOV dword ptr [EBX + 0xbbf8],0x0    ; 004da700
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004da70a
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004da70f
    ADD ESP,0x30                        ; 004da712
    POP EDI                             ; 004da715
    POP ESI                             ; 004da716
    POP EBX                             ; 004da717
    RET                                 ; 004da718
    MOV ESI,0xc0166666                  ; 004da719
        ;   Label: LAB_004da719
    MOV EDI,0xbfcccccd                  ; 004da71e
    MOV ECX,0x40866666                  ; 004da723
    LEA EAX,[ESP + 0x24]                ; 004da728
    LEA EDX,[ESP + 0x18]                ; 004da72c
    MOV dword ptr [ESP + 0x28],ESI      ; 004da730
    MOV dword ptr [ESP + 0x2c],EDI      ; 004da734
    MOV dword ptr [ESP + 0x24],ECX      ; 004da738
    CMP EDX,EAX                         ; 004da73c
    JZ 0x004da74c                       ; 004da73e
        ;   XREF to: 004da74c (CONDITIONAL_JUMP)  ; LAB_004da74c
    MOV dword ptr [ESP + 0x1c],ESI      ; 004da740
    MOV dword ptr [ESP + 0x20],EDI      ; 004da744
    MOV dword ptr [ESP + 0x18],ECX      ; 004da748
    MOV EAX,dword ptr [EBX + 0xbd48]    ; 004da74c
        ;   Label: LAB_004da74c
    FLD float ptr [EAX + 0x34]          ; 004da752
    FADD double ptr [0x0058a2e9]        ; 004da755 | DOUBLE_0058a2e9
    JMP 0x004da6c6                      ; 004da75b
        ;   XREF to: 004da6c6 (UNCONDITIONAL_JUMP)  ; LAB_004da6c6

