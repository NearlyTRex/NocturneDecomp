; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_initLookupTable_FUN_0044cb60(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ecb5
;
; Referenced Globals:
;   undefined4 DAT_0061b49c
;   undefined4 DAT_007ddbb0
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830
;   core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30
;   core_dcamera.cpp_FUN_00453600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cb60
        ;   Label: core_dcamera.cpp_CDemonCamera_initLookupTable_FUN_0044cb60
    PUSH ESI                            ; 0044cb61
    PUSH EDI                            ; 0044cb62
    PUSH EBP                            ; 0044cb63
    SUB ESP,0x8                         ; 0044cb64
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044cb67
    CMP dword ptr [0x007ddbb0],0x0      ; 0044cb6b | DAT_007ddbb0
    JZ 0x0044cc01                       ; 0044cb72
        ;   XREF to: 0044cc01 (CONDITIONAL_JUMP)  ; LAB_0044cc01
    MOV EAX,[0x0061b49c]                ; 0044cb78 | DAT_0061b49c
        ;   Label: LAB_0044cb78
    CMP EAX,0x1e0                       ; 0044cb7d
    JG 0x0044cc1f                       ; 0044cb82
        ;   XREF to: 0044cc1f (CONDITIONAL_JUMP)  ; LAB_0044cc1f
    PUSH EAX                            ; 0044cb88
        ;   Label: LAB_0044cb88
    PUSH EBX                            ; 0044cb89
    CALL core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30 ; 0044cb8a
        ;   XREF to: 0044cc30 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_init_FUN_0044cc30(CDemonCamera * this_ptr, int screen_height)
    ADD ESP,0x8                         ; 0044cb8f
    PUSH EBX                            ; 0044cb92
    CALL core_dcamera.cpp_FUN_00453600  ; 0044cb93
        ;   XREF to: 00453600 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_FUN_00453600(CDemonCamera * this_ptr)
    MOV EBX,0x40                        ; 0044cb98
    ADD ESP,0x4                         ; 0044cb9d
    XOR EBP,EBP                         ; 0044cba0
    MOV dword ptr [ESP],EBX             ; 0044cba2
    MOV dword ptr [ESP + 0x4],EBP       ; 0044cba5
    MOV ESI,dword ptr [ESP + 0x4]       ; 0044cba9
        ;   Label: LAB_0044cba9
    MOV EBX,EBP                         ; 0044cbad
    MOV EDI,dword ptr [ESP]             ; 0044cbaf
    SHL EBX,0x6                         ; 0044cbb2
    IMUL ECX,EBP,0x0                    ; 0044cbb5
    MOV EDX,ECX                         ; 0044cbb8
        ;   Label: LAB_0044cbb8
    MOV EAX,ECX                         ; 0044cbba
    SAR EDX,0x1f                        ; 0044cbbc
    SHL EDX,0x4                         ; 0044cbbf
    SBB EAX,EDX                         ; 0044cbc2
    SAR EAX,0x4                         ; 0044cbc4
    MOV EDX,EAX                         ; 0044cbc7
    SAR EDX,0x1f                        ; 0044cbc9
    SHL EDX,0x2                         ; 0044cbcc
    SBB EAX,EDX                         ; 0044cbcf
    SAR EAX,0x2                         ; 0044cbd1
    INC EBX                             ; 0044cbd4
    ADD ECX,ESI                         ; 0044cbd5
    MOV byte ptr [EBX + 0x13411ff],AL   ; 0044cbd7
    CMP EBX,EDI                         ; 0044cbdd
    JNZ 0x0044cbb8                      ; 0044cbdf
        ;   XREF to: 0044cbb8 (CONDITIONAL_JUMP)  ; LAB_0044cbb8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044cbe1
    MOV EDI,dword ptr [ESP]             ; 0044cbe5
    INC EBP                             ; 0044cbe8
    INC EAX                             ; 0044cbe9
    ADD EDI,0x40                        ; 0044cbea
    MOV dword ptr [ESP + 0x4],EAX       ; 0044cbed
    MOV dword ptr [ESP],EDI             ; 0044cbf1
    CMP EBP,0x40                        ; 0044cbf4
    JL 0x0044cba9                       ; 0044cbf7
        ;   XREF to: 0044cba9 (CONDITIONAL_JUMP)  ; LAB_0044cba9
    ADD ESP,0x8                         ; 0044cbf9
    POP EBP                             ; 0044cbfc
    POP EDI                             ; 0044cbfd
    POP ESI                             ; 0044cbfe
    POP EBX                             ; 0044cbff
    RET                                 ; 0044cc00
    PUSH 0x10000                        ; 0044cc01
        ;   Label: LAB_0044cc01
    PUSH EBX                            ; 0044cc06
    CALL core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830 ; 0044cc07
        ;   XREF to: 00454830 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00454830(CDemonCamera * this_ptr, int gamma_value)
    MOV ECX,0x1                         ; 0044cc0c
    ADD ESP,0x8                         ; 0044cc11
    MOV dword ptr [0x007ddbb0],ECX      ; 0044cc14 | DAT_007ddbb0
    JMP 0x0044cb78                      ; 0044cc1a
        ;   XREF to: 0044cb78 (UNCONDITIONAL_JUMP)  ; LAB_0044cb78
    MOV EAX,0x1e0                       ; 0044cc1f
        ;   Label: LAB_0044cc1f
    JMP 0x0044cb88                      ; 0044cc24
        ;   XREF to: 0044cb88 (UNCONDITIONAL_JUMP)  ; LAB_0044cb88

