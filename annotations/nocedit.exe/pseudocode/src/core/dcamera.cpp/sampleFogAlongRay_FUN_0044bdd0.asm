; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dcamera_cpp_sampleFogAlongRay_FUN_0044bdd0(SFogGrid *fog_ptr,CVector3i *start_pos,CVector3i *end_pos,int ray_length)
;
; Parameters:
; SFogGrid *       Stack[0x4]:4   fog_ptr
; CVector3i *      Stack[0x8]:4   start_pos
; CVector3i *      Stack[0xc]:4   end_pos
; int              Stack[0x10]:4   ray_length
; Local Variables:
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; uint             Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_getFogValueAtPosition_FUN_00453700 at 00453798
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452c4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bdd0
        ;   Label: core_dcamera.cpp_sampleFogAlongRay_FUN_0044bdd0
    PUSH ESI                            ; 0044bdd1
    PUSH EDI                            ; 0044bdd2
    PUSH EBP                            ; 0044bdd3
    SUB ESP,0x1c                        ; 0044bdd4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044bdd7
    MOV ESI,dword ptr [ESP + 0x34]      ; 0044bddb
    MOV ECX,dword ptr [ESP + 0x38]      ; 0044bddf
    CMP dword ptr [ESP + 0x3c],0x0      ; 0044bde3
    JZ 0x0044bf74                       ; 0044bde8
        ;   XREF to: 0044bf74 (CONDITIONAL_JUMP)  ; LAB_0044bf74
    MOV EBX,dword ptr [ESI]             ; 0044bdee
    MOV EAX,dword ptr [ECX]             ; 0044bdf0
    SUB EAX,EBX                         ; 0044bdf2
    MOV EDI,dword ptr [ESI + 0x4]       ; 0044bdf4
    MOV dword ptr [ESP + 0x14],EAX      ; 0044bdf7
    MOV EAX,dword ptr [ECX + 0x4]       ; 0044bdfb
    SUB EAX,EDI                         ; 0044bdfe
    MOV EDX,dword ptr [ESI + 0x8]       ; 0044be00
    MOV dword ptr [ESP + 0xc],EAX       ; 0044be03
    MOV EAX,dword ptr [ECX + 0x8]       ; 0044be07
    SUB EAX,EDX                         ; 0044be0a
    MOV dword ptr [ESP + 0x10],EAX      ; 0044be0c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044be10
    MOV EDX,EAX                         ; 0044be14
    SAR EDX,0x1f                        ; 0044be16
    SHL EDX,0x8                         ; 0044be19
    SBB EAX,EDX                         ; 0044be1c
    SAR EAX,0x8                         ; 0044be1e
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044be21
    TEST EAX,EAX                        ; 0044be25
    JZ 0x0044bf6c                       ; 0044be27
        ;   XREF to: 0044bf6c (CONDITIONAL_JUMP)  ; LAB_0044bf6c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044be2d
    MOV EDX,EAX                         ; 0044be31
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0044be33
    SAR EDX,0x1f                        ; 0044be37
    IDIV EBX                            ; 0044be3a
    MOV dword ptr [ESP + 0x14],EAX      ; 0044be3c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044be40
    MOV EDX,EAX                         ; 0044be44
    SAR EDX,0x1f                        ; 0044be46
    IDIV EBX                            ; 0044be49
    MOV dword ptr [ESP + 0xc],EAX       ; 0044be4b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044be4f
    MOV EDX,EAX                         ; 0044be53
    SAR EDX,0x1f                        ; 0044be55
    IDIV EBX                            ; 0044be58
    MOV EDI,ESP                         ; 0044be5a
    MOVSD ES:EDI,ESI                    ; 0044be5c
    MOVSD ES:EDI,ESI                    ; 0044be5d
    MOVSD ES:EDI,ESI                    ; 0044be5e
    MOV ECX,EBX                         ; 0044be5f
    MOV ESI,dword ptr [ESP]             ; 0044be61
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044be64
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044be68
    MOV dword ptr [ESP + 0x10],EAX      ; 0044be6c
    XOR EBX,EBX                         ; 0044be70
    MOV EAX,dword ptr [EBP + 0x1000]    ; 0044be72
    MOV dword ptr [ESP + 0x18],EBX      ; 0044be78
    ADD ESI,EAX                         ; 0044be7c
    MOV EAX,dword ptr [EBP + 0x1004]    ; 0044be7e
    MOV dword ptr [ESP],ESI             ; 0044be84
    ADD EDI,EAX                         ; 0044be87
    MOV EAX,dword ptr [EBP + 0x1008]    ; 0044be89
    XOR ESI,ESI                         ; 0044be8f
    ADD EDX,EAX                         ; 0044be91
    MOV dword ptr [ESP + 0x4],EDI       ; 0044be93
    MOV dword ptr [ESP + 0x8],EDX       ; 0044be97
    TEST ECX,ECX                        ; 0044be9b
    JLE 0x0044bf68                      ; 0044be9d
        ;   XREF to: 0044bf68 (CONDITIONAL_JUMP)  ; LAB_0044bf68
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044bea3
        ;   Label: LAB_0044bea3
    MOV EDX,EAX                         ; 0044bea7
    SAR EDX,0x1f                        ; 0044bea9
    SHL EDX,0x8                         ; 0044beac
    SBB EAX,EDX                         ; 0044beaf
    SAR EAX,0x8                         ; 0044beb1
    MOV ECX,EAX                         ; 0044beb4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044beb6
    MOV EDX,EAX                         ; 0044beba
    SAR EDX,0x1f                        ; 0044bebc
    SHL EDX,0x8                         ; 0044bebf
    SBB EAX,EDX                         ; 0044bec2
    SAR EAX,0x8                         ; 0044bec4
    AND ECX,0xf                         ; 0044bec7
    SHL ECX,0x8                         ; 0044beca
    AND EAX,0xf                         ; 0044becd
    ADD ECX,EBP                         ; 0044bed0
    SHL EAX,0x4                         ; 0044bed2
    ADD ECX,EAX                         ; 0044bed5
    MOV EAX,dword ptr [ESP]             ; 0044bed7
    MOV EDX,EAX                         ; 0044beda
    SAR EDX,0x1f                        ; 0044bedc
    SHL EDX,0x8                         ; 0044bedf
    SBB EAX,EDX                         ; 0044bee2
    SAR EAX,0x8                         ; 0044bee4
    AND EAX,0xf                         ; 0044bee7
    MOV CL,byte ptr [ECX + EAX*0x1]     ; 0044beea
    MOV EDX,ECX                         ; 0044beed
    MOV EAX,dword ptr [EBP + 0x101c]    ; 0044beef
    AND EDX,0xff                        ; 0044bef5
    IMUL EDX                            ; 0044befb
    SHRD EAX,EDX,0x10                   ; 0044befd
    MOV EBX,dword ptr [EBP + 0x1018]    ; 0044bf01
    MOV ECX,EAX                         ; 0044bf07
    TEST EBX,EBX                        ; 0044bf09
    JZ 0x0044bf21                       ; 0044bf0b
        ;   XREF to: 0044bf21 (CONDITIONAL_JUMP)  ; LAB_0044bf21
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044bf0d
    CMP EAX,EBX                         ; 0044bf11
    JLE 0x0044bf78                      ; 0044bf13
        ;   XREF to: 0044bf78 (CONDITIONAL_JUMP)  ; LAB_0044bf78
    XOR EAX,EAX                         ; 0044bf15
    MOV EDX,ECX                         ; 0044bf17
        ;   Label: LAB_0044bf17
    IMUL EDX                            ; 0044bf19
    SHRD EAX,EDX,0x10                   ; 0044bf1b
    MOV ECX,EAX                         ; 0044bf1f
    MOV EBX,dword ptr [ESP + 0x18]      ; 0044bf21
        ;   Label: LAB_0044bf21
    ADD EBX,ECX                         ; 0044bf25
    MOV dword ptr [ESP + 0x18],EBX      ; 0044bf27
    CMP EBX,0x4000                      ; 0044bf2b
    JA 0x0044bf96                       ; 0044bf31
        ;   XREF to: 0044bf96 (CONDITIONAL_JUMP)  ; LAB_0044bf96
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044bf33
    MOV EBX,dword ptr [ESP]             ; 0044bf37
    MOV EDI,dword ptr [ESP + 0x4]       ; 0044bf3a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044bf3e
    MOV ECX,dword ptr [ESP + 0x3c]      ; 0044bf42
    ADD EBX,EAX                         ; 0044bf46
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044bf48
    INC ESI                             ; 0044bf4c
    ADD EDI,EAX                         ; 0044bf4d
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044bf4f
    MOV dword ptr [ESP],EBX             ; 0044bf53
    ADD EDX,EAX                         ; 0044bf56
    MOV dword ptr [ESP + 0x4],EDI       ; 0044bf58
    MOV dword ptr [ESP + 0x8],EDX       ; 0044bf5c
    CMP ESI,ECX                         ; 0044bf60
    JL 0x0044bea3                       ; 0044bf62
        ;   XREF to: 0044bea3 (CONDITIONAL_JUMP)  ; LAB_0044bea3
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044bf68
        ;   Label: LAB_0044bf68
    ADD ESP,0x1c                        ; 0044bf6c
        ;   Label: LAB_0044bf6c
    POP EBP                             ; 0044bf6f
    POP EDI                             ; 0044bf70
    POP ESI                             ; 0044bf71
    POP EBX                             ; 0044bf72
    RET                                 ; 0044bf73
    XOR EAX,EAX                         ; 0044bf74
        ;   Label: LAB_0044bf74
    JMP 0x0044bf6c                      ; 0044bf76
        ;   XREF to: 0044bf6c (UNCONDITIONAL_JUMP)  ; LAB_0044bf6c
    TEST EAX,EAX                        ; 0044bf78
        ;   Label: LAB_0044bf78
    JGE 0x0044bf83                      ; 0044bf7a
        ;   XREF to: 0044bf83 (CONDITIONAL_JUMP)  ; LAB_0044bf83
    MOV EAX,0x10000                     ; 0044bf7c
    JMP 0x0044bf17                      ; 0044bf81
        ;   XREF to: 0044bf17 (UNCONDITIONAL_JUMP)  ; LAB_0044bf17
    MOV EDX,dword ptr [ESP + 0x4]       ; 0044bf83
        ;   Label: LAB_0044bf83
    MOV EAX,EBX                         ; 0044bf87
    SUB EAX,EDX                         ; 0044bf89
    MOV EDX,0x10000                     ; 0044bf8b
    IMUL EDX                            ; 0044bf90
    IDIV EBX                            ; 0044bf92
    JMP 0x0044bf17                      ; 0044bf94
        ;   XREF to: 0044bf17 (UNCONDITIONAL_JUMP)  ; LAB_0044bf17
    MOV EAX,0x4000                      ; 0044bf96
        ;   Label: LAB_0044bf96
    ADD ESP,0x1c                        ; 0044bf9b
    POP EBP                             ; 0044bf9e
    POP EDI                             ; 0044bf9f
    POP ESI                             ; 0044bfa0
    POP EBX                             ; 0044bfa1
    RET                                 ; 0044bfa2

