; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_vector
; Local Variables:
; CVector3i        Stack[-0x30]:12  local_30
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  iStack_20
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   CVector3i g_CameraOutOfBoundsCoord
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044da90
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
    PUSH EDI                            ; 0044da91
    PUSH EBP                            ; 0044da92
    SUB ESP,0x24                        ; 0044da93
    MOV ECX,dword ptr [ESP + 0x34]      ; 0044da96
    MOV EBX,ESI                         ; 0044da9a
    MOV ESI,dword ptr [ESP + 0x38]      ; 0044da9c
    MOV EAX,dword ptr [ESI]             ; 0044daa0
    SUB EAX,dword ptr [ECX + 0x16c]     ; 0044daa2
    MOV EDI,dword ptr [ECX + 0x170]     ; 0044daa8
    MOV dword ptr [ESP + 0x18],EAX      ; 0044daae
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dab2
    SUB EAX,EDI                         ; 0044dab5
    MOV EBP,dword ptr [ECX + 0x174]     ; 0044dab7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044dabd
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dac1
    SUB EAX,EBP                         ; 0044dac4
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044dac6
    MOV dword ptr [ESP + 0x20],EAX      ; 0044daca
    MOV EAX,dword ptr [ECX + 0x180]     ; 0044dace
    IMUL EDX                            ; 0044dad4
    SHRD EAX,EDX,0x10                   ; 0044dad6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044dada
    MOV ESI,EAX                         ; 0044dade
    MOV EAX,dword ptr [ECX + 0x18c]     ; 0044dae0
    IMUL EDX                            ; 0044dae6
    SHRD EAX,EDX,0x10                   ; 0044dae8
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044daec
    ADD ESI,EAX                         ; 0044daf0
    MOV EAX,dword ptr [ECX + 0x198]     ; 0044daf2
    IMUL EDX                            ; 0044daf8
    SHRD EAX,EDX,0x10                   ; 0044dafa
    ADD ESI,EAX                         ; 0044dafe
    MOV dword ptr [ESP + 0x8],ESI       ; 0044db00
    TEST ESI,ESI                        ; 0044db04
    JG 0x0044db26                       ; 0044db06
        ;   XREF to: 0044db26 (CONDITIONAL_JUMP)  ; LAB_0044db26
    LEA EDI,[ESP + 0xc]                 ; 0044db08
        ;   Label: LAB_0044db08
    MOV ESI,0x151bf98                   ; 0044db0c | g_CameraOutOfBoundsCoord
    JMP 0x0060c368                      ; 0044db11
        ;   XREF to: 0060c368 (UNCONDITIONAL_JUMP)  ; LAB_0060c368
        ;   Label: LAB_0044db11
    MOV EDI,EBX                         ; 0044db18
        ;   Label: LAB_0044db18
    JMP 0x0060c387                      ; 0044db1a
        ;   XREF to: 0060c387 (UNCONDITIONAL_JUMP)  ; LAB_0060c387
    ADD ESP,0x24                        ; 0044db1f
        ;   Label: LAB_0044db1f
    POP EBP                             ; 0044db22
    POP EDI                             ; 0044db23
    POP EBX                             ; 0044db24
    RET                                 ; 0044db25
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044db26
        ;   Label: LAB_0044db26
    MOV EAX,dword ptr [ECX + 0x178]     ; 0044db2a
    IMUL EDX                            ; 0044db30
    SHRD EAX,EDX,0x10                   ; 0044db32
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044db36
    MOV ESI,EAX                         ; 0044db3a
    MOV EAX,dword ptr [ECX + 0x184]     ; 0044db3c
    IMUL EDX                            ; 0044db42
    SHRD EAX,EDX,0x10                   ; 0044db44
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044db48
    ADD ESI,EAX                         ; 0044db4c
    MOV EAX,dword ptr [ECX + 0x190]     ; 0044db4e
    IMUL EDX                            ; 0044db54
    SHRD EAX,EDX,0x10                   ; 0044db56
    ADD ESI,EAX                         ; 0044db5a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044db5c
    MOV dword ptr [ESP],ESI             ; 0044db60
    CMP ESI,EDX                         ; 0044db63
    JGE 0x0044db08                      ; 0044db65
        ;   XREF to: 0044db08 (CONDITIONAL_JUMP)  ; LAB_0044db08
    MOV EDI,EDX                         ; 0044db67
    NEG EDI                             ; 0044db69
    CMP EDI,ESI                         ; 0044db6b
    JGE 0x0044db08                      ; 0044db6d
        ;   XREF to: 0044db08 (CONDITIONAL_JUMP)  ; LAB_0044db08
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044db6f
    MOV EAX,dword ptr [ECX + 0x17c]     ; 0044db73
    IMUL EDX                            ; 0044db79
    SHRD EAX,EDX,0x10                   ; 0044db7b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0044db7f
    MOV ESI,EAX                         ; 0044db83
    MOV EAX,dword ptr [ECX + 0x188]     ; 0044db85
    IMUL EDX                            ; 0044db8b
    SHRD EAX,EDX,0x10                   ; 0044db8d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0044db91
    ADD ESI,EAX                         ; 0044db95
    MOV EAX,dword ptr [ECX + 0x194]     ; 0044db97
    IMUL EDX                            ; 0044db9d
    SHRD EAX,EDX,0x10                   ; 0044db9f
    ADD ESI,EAX                         ; 0044dba3
    MOV EBP,dword ptr [ESP + 0x8]       ; 0044dba5
    MOV dword ptr [ESP + 0x4],ESI       ; 0044dba9
    CMP ESI,EBP                         ; 0044dbad
    JGE 0x0044db08                      ; 0044dbaf
        ;   XREF to: 0044db08 (CONDITIONAL_JUMP)  ; LAB_0044db08
    CMP EDI,ESI                         ; 0044dbb5
    JGE 0x0044db08                      ; 0044dbb7
        ;   XREF to: 0044db08 (CONDITIONAL_JUMP)  ; LAB_0044db08
    LEA EDI,[ESP + 0xc]                 ; 0044dbbd
    MOV ESI,ESP                         ; 0044dbc1
    JMP 0x0044db11                      ; 0044dbc3
        ;   XREF to: 0044db11 (UNCONDITIONAL_JUMP)  ; LAB_0044db11
    MOV ECX,dword ptr [ESI]             ; 0060c368
        ;   Label: LAB_0060c368
    MOV dword ptr [EDI],ECX             ; 0060c36a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c36c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c36f
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c372
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c375
    ADD ESI,0xc                         ; 0060c378
    ADD EDI,0xc                         ; 0060c37b
    LEA ESI,[ESP + 0xc]                 ; 0060c37e
    JMP 0x0044db18                      ; 0060c382
        ;   XREF to: 0044db18 (UNCONDITIONAL_JUMP)  ; LAB_0044db18
    MOV ECX,dword ptr [ESI]             ; 0060c387
        ;   Label: LAB_0060c387
    MOV dword ptr [EDI],ECX             ; 0060c389
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c38b
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c38e
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c391
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c394
    ADD ESI,0xc                         ; 0060c397
    ADD EDI,0xc                         ; 0060c39a
    MOV EAX,EBX                         ; 0060c39d
    JMP 0x0044db1f                      ; 0060c39f
        ;   XREF to: 0044db1f (UNCONDITIONAL_JUMP)  ; LAB_0044db1f

