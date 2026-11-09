; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_FUN_004fdd50(CMobster *this_ptr)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   core_mobster.cpp_FUN_004fde80 at 004fe908
;
; Referenced Globals:
;   undefined4 DAT_005ded6d
;   undefined4 DAT_005ded71
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fdd50
        ;   Label: core_mobster.cpp_FUN_004fdd50
    PUSH ESI                            ; 004fdd51
    PUSH EDI                            ; 004fdd52
    SUB ESP,0x3c                        ; 004fdd53
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004fdd56
    CMP dword ptr [EBX + 0x10b20],0x0   ; 004fdd5a
    JZ 0x004fde07                       ; 004fdd61
        ;   XREF to: 004fde07 (CONDITIONAL_JUMP)  ; LAB_004fde07
    MOV ESI,0xc0166666                  ; 004fdd67
    MOV EDI,0xbfcccccd                  ; 004fdd6c
    MOV ECX,0xc0866666                  ; 004fdd71
    MOV EDX,ESP                         ; 004fdd76
    LEA EAX,[ESP + 0x18]                ; 004fdd78
    MOV dword ptr [ESP + 0x4],ESI       ; 004fdd7c
    MOV dword ptr [ESP + 0x8],EDI       ; 004fdd80
    MOV dword ptr [ESP],ECX             ; 004fdd84
    CMP EAX,EDX                         ; 004fdd87
    JZ 0x004fdd97                       ; 004fdd89
        ;   XREF to: 004fdd97 (CONDITIONAL_JUMP)  ; LAB_004fdd97
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fdd8b
    MOV dword ptr [ESP + 0x20],EDI      ; 004fdd8f
    MOV dword ptr [ESP + 0x18],ECX      ; 004fdd93
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004fdd97
        ;   Label: LAB_004fdd97
    FLD float ptr [EAX + 0x34]          ; 004fdd9d
    FADD float ptr [0x005ded71]         ; 004fdda0 | DAT_005ded71
    FSTP float ptr [EBX + 0x34]         ; 004fdda6
        ;   Label: LAB_004fdda6
    LEA EAX,[ESP + 0x18]                ; 004fdda9
    PUSH EAX                            ; 004fddad
    MOV ECX,dword ptr [EBX + 0x10b1c]   ; 004fddae
    PUSH ECX                            ; 004fddb4
    LEA ESI,[ESP + 0x38]                ; 004fddb5
    LEA EDI,[ESP + 0x14]                ; 004fddb9
    CALL core_actor.cpp_FUN_00408d70    ; 004fddbd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x38]                ; 004fddc2
    ADD ESP,0x8                         ; 004fddc6
    MOVSD ES:EDI,ESI                    ; 004fddc9
    MOVSD ES:EDI,ESI                    ; 004fddca
    MOVSD ES:EDI,ESI                    ; 004fddcb
    LEA EDX,[EBX + 0x20]                ; 004fddcc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004fddcf
    PUSH 0x1                            ; 004fddd3
    MOV dword ptr [EDX],EAX             ; 004fddd5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004fddd7
    PUSH 0x8                            ; 004fdddb
    MOV dword ptr [EDX + 0x4],EAX       ; 004fdddd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004fdde0
    ADD EBX,0x2b4                       ; 004fdde4
    MOV dword ptr [EDX + 0x8],EAX       ; 004fddea
    PUSH EBX                            ; 004fdded
    MOV dword ptr [EBX + 0x10868],0x0   ; 004fddee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fddf8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fddfd
    ADD ESP,0x3c                        ; 004fde00
    POP EDI                             ; 004fde03
    POP ESI                             ; 004fde04
    POP EBX                             ; 004fde05
    RET                                 ; 004fde06
    MOV ESI,0xc0166666                  ; 004fde07
        ;   Label: LAB_004fde07
    MOV EDI,0xbfcccccd                  ; 004fde0c
    MOV ECX,0x40866666                  ; 004fde11
    LEA EAX,[ESP + 0x24]                ; 004fde16
    LEA EDX,[ESP + 0x18]                ; 004fde1a
    MOV dword ptr [ESP + 0x28],ESI      ; 004fde1e
    MOV dword ptr [ESP + 0x2c],EDI      ; 004fde22
    MOV dword ptr [ESP + 0x24],ECX      ; 004fde26
    CMP EDX,EAX                         ; 004fde2a
    JZ 0x004fde3a                       ; 004fde2c
        ;   XREF to: 004fde3a (CONDITIONAL_JUMP)  ; LAB_004fde3a
    MOV dword ptr [ESP + 0x1c],ESI      ; 004fde2e
    MOV dword ptr [ESP + 0x20],EDI      ; 004fde32
    MOV dword ptr [ESP + 0x18],ECX      ; 004fde36
    MOV EAX,dword ptr [EBX + 0x10b1c]   ; 004fde3a
        ;   Label: LAB_004fde3a
    FLD float ptr [EAX + 0x34]          ; 004fde40
    FADD float ptr [0x005ded6d]         ; 004fde43 | DAT_005ded6d
    JMP 0x004fdda6                      ; 004fde49
        ;   XREF to: 004fdda6 (UNCONDITIONAL_JUMP)  ; LAB_004fdda6

