; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_FUN_0041ab20(CBodyPart *this_ptr,CVector3f *position)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_FUN_00431210 at 0043141a
;
; Referenced Globals:
;   undefined4 s_GCHAR2_RAW_005d44f0+1
;   undefined4 s_GCHAR2_RAW_005d44f0+2
;   undefined4 s_GCHAR2_RAW_005d44f0+3
;   undefined4 s_GCHAR2_RAW_005d44f0+4
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc00
;   core_flame.cpp_CFlame_setup_FUN_004b7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ab20
        ;   Label: core_bodypart.cpp_FUN_0041ab20
    PUSH EBP                            ; 0041ab21
    SUB ESP,0x1c                        ; 0041ab22
    MOV EBX,dword ptr [ESP + 0x28]      ; 0041ab25
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041ab29
    MOV EDX,dword ptr [EBX + 0x74c]     ; 0041ab2d
    CMP EDX,0x2                         ; 0041ab33
    JGE 0x0041ac52                      ; 0041ab36
        ;   XREF to: 0041ac52 (CONDITIONAL_JUMP)  ; LAB_0041ac52
    PUSH EDI                            ; 0041ab3c
    PUSH ESI                            ; 0041ab3d
    MOV ESI,EDX                         ; 0041ab3e
    IMUL EBP,EDX,0x2b0                  ; 0041ab40
    LEA EDX,[EBX + 0x750]               ; 0041ab46
    INC ESI                             ; 0041ab4c
    ADD EBP,EDX                         ; 0041ab4d
    MOV dword ptr [EBX + 0x74c],ESI     ; 0041ab4f
    CMP EBP,EAX                         ; 0041ab55
    JZ 0x0041ab6a                       ; 0041ab57
        ;   XREF to: 0041ab6a (CONDITIONAL_JUMP)  ; LAB_0041ab6a
    MOV EDX,dword ptr [EAX]             ; 0041ab59
    MOV dword ptr [EBP],EDX             ; 0041ab5b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ab5e
    MOV dword ptr [EBP + 0x4],EDX       ; 0041ab61
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ab64
    MOV dword ptr [EBP + 0x8],EDX       ; 0041ab67
    PUSH EBP                            ; 0041ab6a
        ;   Label: LAB_0041ab6a
    PUSH EBX                            ; 0041ab6b
    LEA ESI,[ESP + 0x1c]                ; 0041ab6c
    LEA EDI,[ESP + 0x10]                ; 0041ab70
    CALL core_actor.cpp_FUN_00408b40    ; 0041ab74
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1c]                ; 0041ab79
    ADD ESP,0x8                         ; 0041ab7d
    MOVSD ES:EDI,ESI                    ; 0041ab80
    MOVSD ES:EDI,ESI                    ; 0041ab81
    MOVSD ES:EDI,ESI                    ; 0041ab82
    LEA EDX,[EBP + 0x2c]                ; 0041ab83
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041ab86
    MOV dword ptr [EDX],EAX             ; 0041ab8a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0041ab8c
    MOV dword ptr [EDX + 0x4],EAX       ; 0041ab90
    MOV EAX,dword ptr [ESP + 0x10]      ; 0041ab93
    MOV dword ptr [EDX + 0x8],EAX       ; 0041ab97
    LEA EAX,[EBP + 0xc]                 ; 0041ab9a
    PUSH EAX                            ; 0041ab9d
    CALL core_flame.cpp_CFlame_setup_FUN_004b7b20 ; 0041ab9e
        ;   XREF to: 004b7b20 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_CFlame_setup_FUN_004b7b20(CFlame * this_ptr)
    MOV dword ptr [EBP + 0x1b8],0x0     ; 0041aba3
    MOV dword ptr [EBP + 0x164],0x3fc00000 ; 0041abad
    MOV dword ptr [EBP + 0x168],0x40400000 ; 0041abb7
    MOV ESI,0x5d44f1                    ; 0041abc1 | s_GCHAR2_RAW_005d44f0+1
    MOV dword ptr [EBP + 0x16c],0x3fc00000 ; 0041abc6
    ADD ESP,0x4                         ; 0041abd0
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041abd3
    LEA EDI,[EBX + 0x198]               ; 0041abdd
    MOV dword ptr [EBX + 0x18c],0x1     ; 0041abe3
    PUSH EDI                            ; 0041abed
    MOV AL,byte ptr [ESI]               ; 0041abee | s_GCHAR2_RAW_005d44f0+1 | s_GCHAR2_RAW_005d44f0+3
        ;   Label: LAB_0041abee
    MOV byte ptr [EDI],AL               ; 0041abf0
    CMP AL,0x0                          ; 0041abf2
    JZ 0x0041ac06                       ; 0041abf4
        ;   XREF to: 0041ac06 (CONDITIONAL_JUMP)  ; LAB_0041ac06
    MOV AL,byte ptr [ESI + 0x1]         ; 0041abf6 | s_GCHAR2_RAW_005d44f0+2 | s_GCHAR2_RAW_005d44f0+4
    ADD ESI,0x2                         ; 0041abf9
    MOV byte ptr [EDI + 0x1],AL         ; 0041abfc
    ADD EDI,0x2                         ; 0041abff
    CMP AL,0x0                          ; 0041ac02
    JNZ 0x0041abee                      ; 0041ac04
        ;   XREF to: 0041abee (CONDITIONAL_JUMP)  ; LAB_0041abee
    POP EDI                             ; 0041ac06
        ;   Label: LAB_0041ac06
    MOV EDI,dword ptr [EBX + 0x180]     ; 0041ac07
    XOR EDX,EDX                         ; 0041ac0d
    TEST EDI,EDI                        ; 0041ac0f
    JLE 0x0041ac30                      ; 0041ac11
        ;   XREF to: 0041ac30 (CONDITIONAL_JUMP)  ; LAB_0041ac30
    XOR EAX,EAX                         ; 0041ac13
    MOV ECX,dword ptr [EBX + 0x188]     ; 0041ac15
        ;   Label: LAB_0041ac15
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 0041ac1b
    INC EDX                             ; 0041ac22
    MOV EBP,dword ptr [EBX + 0x180]     ; 0041ac23
    ADD EAX,0x4                         ; 0041ac29
    CMP EDX,EBP                         ; 0041ac2c
    JL 0x0041ac15                       ; 0041ac2e
        ;   XREF to: 0041ac15 (CONDITIONAL_JUMP)  ; LAB_0041ac15
    PUSH 0x41a00000                     ; 0041ac30
        ;   Label: LAB_0041ac30
    PUSH 0x41400000                     ; 0041ac35
    CALL core_actor.cpp_FUN_0040cc00    ; 0041ac3a
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x28],EAX      ; 0041ac3f
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041ac43
    MOV dword ptr [EBX + 0xccc],EAX     ; 0041ac47
    ADD ESP,0x8                         ; 0041ac4d
    POP ESI                             ; 0041ac50
    POP EDI                             ; 0041ac51
    ADD ESP,0x1c                        ; 0041ac52
        ;   Label: LAB_0041ac52
    POP EBP                             ; 0041ac55
    POP EBX                             ; 0041ac56
    RET                                 ; 0041ac57

