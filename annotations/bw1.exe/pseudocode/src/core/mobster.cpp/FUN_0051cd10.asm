; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_FUN_0051cd10(CMobster *this_ptr)
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
;   core_mobster.cpp_FUN_0051ce40 at 0051d8c8
;
; Referenced Globals:
;   undefined4 DAT_005e9dba
;   undefined4 DAT_005e9dbe
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051cd10
        ;   Label: core_mobster.cpp_FUN_0051cd10
    PUSH ESI                            ; 0051cd11
    PUSH EDI                            ; 0051cd12
    SUB ESP,0x3c                        ; 0051cd13
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0051cd16
    CMP dword ptr [EBX + 0xc290],0x0    ; 0051cd1a
    JZ 0x0051cdc7                       ; 0051cd21
        ;   XREF to: 0051cdc7 (CONDITIONAL_JUMP)  ; LAB_0051cdc7
    MOV ESI,0xc0166666                  ; 0051cd27
    MOV EDI,0xbfcccccd                  ; 0051cd2c
    MOV ECX,0xc0866666                  ; 0051cd31
    MOV EDX,ESP                         ; 0051cd36
    LEA EAX,[ESP + 0x18]                ; 0051cd38
    MOV dword ptr [ESP + 0x4],ESI       ; 0051cd3c
    MOV dword ptr [ESP + 0x8],EDI       ; 0051cd40
    MOV dword ptr [ESP],ECX             ; 0051cd44
    CMP EAX,EDX                         ; 0051cd47
    JZ 0x0051cd57                       ; 0051cd49
        ;   XREF to: 0051cd57 (CONDITIONAL_JUMP)  ; LAB_0051cd57
    MOV dword ptr [ESP + 0x1c],ESI      ; 0051cd4b
    MOV dword ptr [ESP + 0x20],EDI      ; 0051cd4f
    MOV dword ptr [ESP + 0x18],ECX      ; 0051cd53
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 0051cd57
        ;   Label: LAB_0051cd57
    FLD float ptr [EAX + 0x34]          ; 0051cd5d
    FADD float ptr [0x005e9dbe]         ; 0051cd60 | DAT_005e9dbe
    FSTP float ptr [EBX + 0x34]         ; 0051cd66
        ;   Label: LAB_0051cd66
    LEA EAX,[ESP + 0x18]                ; 0051cd69
    PUSH EAX                            ; 0051cd6d
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 0051cd6e
    PUSH ECX                            ; 0051cd74
    LEA ESI,[ESP + 0x38]                ; 0051cd75
    LEA EDI,[ESP + 0x14]                ; 0051cd79
    CALL core_actor.cpp_FUN_00408b40    ; 0051cd7d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x38]                ; 0051cd82
    ADD ESP,0x8                         ; 0051cd86
    MOVSD ES:EDI,ESI                    ; 0051cd89
    MOVSD ES:EDI,ESI                    ; 0051cd8a
    MOVSD ES:EDI,ESI                    ; 0051cd8b
    LEA EDX,[EBX + 0x20]                ; 0051cd8c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051cd8f
    PUSH 0x1                            ; 0051cd93
    MOV dword ptr [EDX],EAX             ; 0051cd95
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051cd97
    PUSH 0x8                            ; 0051cd9b
    MOV dword ptr [EDX + 0x4],EAX       ; 0051cd9d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0051cda0
    ADD EBX,0x158                       ; 0051cda4
    MOV dword ptr [EDX + 0x8],EAX       ; 0051cdaa
    PUSH EBX                            ; 0051cdad
    MOV dword ptr [EBX + 0xc134],0x0    ; 0051cdae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051cdb8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051cdbd
    ADD ESP,0x3c                        ; 0051cdc0
    POP EDI                             ; 0051cdc3
    POP ESI                             ; 0051cdc4
    POP EBX                             ; 0051cdc5
    RET                                 ; 0051cdc6
    MOV ESI,0xc0166666                  ; 0051cdc7
        ;   Label: LAB_0051cdc7
    MOV EDI,0xbfcccccd                  ; 0051cdcc
    MOV ECX,0x40866666                  ; 0051cdd1
    LEA EAX,[ESP + 0x24]                ; 0051cdd6
    LEA EDX,[ESP + 0x18]                ; 0051cdda
    MOV dword ptr [ESP + 0x28],ESI      ; 0051cdde
    MOV dword ptr [ESP + 0x2c],EDI      ; 0051cde2
    MOV dword ptr [ESP + 0x24],ECX      ; 0051cde6
    CMP EDX,EAX                         ; 0051cdea
    JZ 0x0051cdfa                       ; 0051cdec
        ;   XREF to: 0051cdfa (CONDITIONAL_JUMP)  ; LAB_0051cdfa
    MOV dword ptr [ESP + 0x1c],ESI      ; 0051cdee
    MOV dword ptr [ESP + 0x20],EDI      ; 0051cdf2
    MOV dword ptr [ESP + 0x18],ECX      ; 0051cdf6
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 0051cdfa
        ;   Label: LAB_0051cdfa
    FLD float ptr [EAX + 0x34]          ; 0051ce00
    FADD float ptr [0x005e9dba]         ; 0051ce03 | DAT_005e9dba
    JMP 0x0051cd66                      ; 0051ce09
        ;   XREF to: 0051cd66 (UNCONDITIONAL_JUMP)  ; LAB_0051cd66

