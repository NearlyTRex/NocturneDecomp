; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_glass_cpp_FUN_004abb50(undefined4 param_1)
;
;
; XREF[1]:
;   core_glass.cpp_FUN_004abb20 at 004abb33
;
; Referenced Globals:
;   TerminatedCString s_HEADLITE_RAW_00584ebf
;   undefined4 s_HEADLITE_RAW_00584ebf+1
;   undefined4 s_HEADLITE_RAW_00584ebf+2
;   undefined4 s_HEADLITE_RAW_00584ebf+3
;   TerminatedCString s_true_00584ecc
;   undefined4 s_rue_00584ecc+1
;   undefined4 s_ue_00584ecc+2
;   undefined4 s_e_00584ecc+3
;   TerminatedCString s_s_7YEARS_RAW_00584ed1
;   undefined4 s_s_7YEARS_RAW_00584ed1+1
;   undefined4 s_s_7YEARS_RAW_00584ed1+2
;   undefined4 s_s_7YEARS_RAW_00584ed1+3
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;   undefined1* PTR_core_glass.cpp_CGlass_setup_FUN_004abc90_0059e3b4 = 004abc90
;
; Called Functions:
;   core_actor.cpp_FUN_00409d30
;   core_mirror.cpp_CMirror_ctor_FUN_004d6550
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004abb50
        ;   Label: core_glass.cpp_FUN_004abb50
    PUSH EDI                            ; 004abb51
    MOV EDX,dword ptr [ESP + 0xc]       ; 004abb52
    PUSH EDX                            ; 004abb56
    CALL core_actor.cpp_FUN_00409d30    ; 004abb57
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409d30()
    ADD ESP,0x4                         ; 004abb5c
    ADD EAX,0x1e4                       ; 004abb5f
    PUSH EAX                            ; 004abb64
    CALL core_mirror.cpp_CMirror_ctor_FUN_004d6550 ; 004abb65
        ;   XREF to: 004d6550 (UNCONDITIONAL_CALL)  ; undefined core_mirror.cpp_CMirror_ctor_FUN_004d6550()
    ADD ESP,0x4                         ; 004abb6a
    PUSH 0x5993b0                       ; 004abb6d | g_CVectorTypeInfo_005993b0
    PUSH 0x19                           ; 004abb72
    ADD EAX,0x1a0                       ; 004abb74
    PUSH EAX                            ; 004abb79
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004abb7a
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    LEA EDX,[EAX + 0xfffffc7c]          ; 004abb7f
    MOV dword ptr [EDX + 0x14c],0x59e3b4 ; 004abb85 | PTR_core_glass.cpp_CGlass_setup_FUN_004abc90_0059e3b4
    MOV ESI,0x584ebf                    ; 004abb8f | = "HEADLITE.RAW"
    MOV dword ptr [EDX + 0x150],0x40800000 ; 004abb94
    ADD ESP,0xc                         ; 004abb9e
    MOV dword ptr [EDX + 0x154],0x40800000 ; 004abba1
    LEA EDI,[EDX + 0x164]               ; 004abbab
    MOV dword ptr [EDX + 0x158],0x3dcccccd ; 004abbb1
    PUSH EDI                            ; 004abbbb
    MOV AL,byte ptr [ESI]               ; 004abbbc | = "HEADLITE.RAW" | s_HEADLITE_RAW_00584ebf+2
        ;   Label: LAB_004abbbc
    MOV byte ptr [EDI],AL               ; 004abbbe
    CMP AL,0x0                          ; 004abbc0
    JZ 0x004abbd4                       ; 004abbc2
        ;   XREF to: 004abbd4 (CONDITIONAL_JUMP)  ; LAB_004abbd4
    MOV AL,byte ptr [ESI + 0x1]         ; 004abbc4 | s_HEADLITE_RAW_00584ebf+1 | s_HEADLITE_RAW_00584ebf+3
    ADD ESI,0x2                         ; 004abbc7
    MOV byte ptr [EDI + 0x1],AL         ; 004abbca
    ADD EDI,0x2                         ; 004abbcd
    CMP AL,0x0                          ; 004abbd0
    JNZ 0x004abbbc                      ; 004abbd2
        ;   XREF to: 004abbbc (CONDITIONAL_JUMP)  ; LAB_004abbbc
    POP EDI                             ; 004abbd4
        ;   Label: LAB_004abbd4
    MOV dword ptr [EDX + 0x160],0x0     ; 004abbd5
    MOV dword ptr [EDX + 0x15c],0xd     ; 004abbdf
    MOV dword ptr [EDX + 0x174],0x8000  ; 004abbe9
    MOV dword ptr [EDX + 0x178],0x0     ; 004abbf3
    MOV ESI,0x584ecc                    ; 004abbfd | = "true"
    MOV byte ptr [EDX + 0x17c],0x0      ; 004abc02
    LEA EDI,[EDX + 0x304]               ; 004abc09
    MOV dword ptr [EDX + 0x1e0],0x0     ; 004abc0f
    PUSH EDI                            ; 004abc19
    MOV AL,byte ptr [ESI]               ; 004abc1a | = "true" | s_ue_00584ecc+2
        ;   Label: LAB_004abc1a
    MOV byte ptr [EDI],AL               ; 004abc1c
    CMP AL,0x0                          ; 004abc1e
    JZ 0x004abc32                       ; 004abc20
        ;   XREF to: 004abc32 (CONDITIONAL_JUMP)  ; LAB_004abc32
    MOV AL,byte ptr [ESI + 0x1]         ; 004abc22 | s_rue_00584ecc+1 | s_e_00584ecc+3
    ADD ESI,0x2                         ; 004abc25
    MOV byte ptr [EDI + 0x1],AL         ; 004abc28
    ADD EDI,0x2                         ; 004abc2b
    CMP AL,0x0                          ; 004abc2e
    JNZ 0x004abc1a                      ; 004abc30
        ;   XREF to: 004abc1a (CONDITIONAL_JUMP)  ; LAB_004abc1a
    POP EDI                             ; 004abc32
        ;   Label: LAB_004abc32
    MOV ESI,0x584ed1                    ; 004abc33 | = "7YEARS.RAW"
    LEA EDI,[EDX + 0x374]               ; 004abc38
    MOV dword ptr [EDX + 0x368],0x0     ; 004abc3e
    PUSH EDI                            ; 004abc48
    MOV AL,byte ptr [ESI]               ; 004abc49 | = "7YEARS.RAW" | s_s_7YEARS_RAW_00584ed1+2
        ;   Label: LAB_004abc49
    MOV byte ptr [EDI],AL               ; 004abc4b
    CMP AL,0x0                          ; 004abc4d
    JZ 0x004abc61                       ; 004abc4f
        ;   XREF to: 004abc61 (CONDITIONAL_JUMP)  ; LAB_004abc61
    MOV AL,byte ptr [ESI + 0x1]         ; 004abc51 | s_s_7YEARS_RAW_00584ed1+1 | s_s_7YEARS_RAW_00584ed1+3
    ADD ESI,0x2                         ; 004abc54
    MOV byte ptr [EDI + 0x1],AL         ; 004abc57
    ADD EDI,0x2                         ; 004abc5a
    CMP AL,0x0                          ; 004abc5d
    JNZ 0x004abc49                      ; 004abc5f
        ;   XREF to: 004abc49 (CONDITIONAL_JUMP)  ; LAB_004abc49
    POP EDI                             ; 004abc61
        ;   Label: LAB_004abc61
    MOV dword ptr [EDX + 0x370],0x0     ; 004abc62
    MOV dword ptr [EDX + 0x36c],0xd     ; 004abc6c
    MOV EAX,EDX                         ; 004abc76
    MOV dword ptr [EDX + 0xb34],0x0     ; 004abc78
    POP EDI                             ; 004abc82
    POP ESI                             ; 004abc83
    RET                                 ; 004abc84

