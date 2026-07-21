; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004f5f60 at 004f5f7b
;   FUN_004f6170 at 004f638d
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0
;   core_xform.cpp_slerpQuaternion_FUN_0055d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5ff0
        ;   Label: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0
    PUSH ESI                            ; 004f5ff1
    PUSH EDI                            ; 004f5ff2
    PUSH EBP                            ; 004f5ff3
    MOV EBP,ESP                         ; 004f5ff4
    SUB ESP,0x58                        ; 004f5ff6
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f5ff9
    FLD float ptr [ESI + 0x2d4]         ; 004f5ffc
    FLDZ                                ; 004f6002
    FCOMPP                              ; 004f6004
    FNSTSW AX                           ; 004f6006
    SAHF                                ; 004f6008
    JA 0x004f6101                       ; 004f6009
        ;   XREF to: 004f6101 (CONDITIONAL_JUMP)  ; LAB_004f6101
    FLD float ptr [ESI + 0x2d4]         ; 004f600f
        ;   Label: LAB_004f600f
    FLD1                                ; 004f6015
    FCOMPP                              ; 004f6017
    FNSTSW AX                           ; 004f6019
    SAHF                                ; 004f601b
    JNC 0x004f6028                      ; 004f601c
        ;   XREF to: 004f6028 (CONDITIONAL_JUMP)  ; LAB_004f6028
    MOV dword ptr [ESI + 0x2d4],0x3f800000 ; 004f601e
    LEA EDI,[ESI + 0x20]                ; 004f6028
        ;   Label: LAB_004f6028
    MOV AH,byte ptr [ESI + 0x2e8]       ; 004f602b
    LEA EBX,[ESI + 0x30]                ; 004f6031
    TEST AH,AH                          ; 004f6034
    JNZ 0x004f6110                      ; 004f6036
        ;   XREF to: 004f6110 (CONDITIONAL_JUMP)  ; LAB_004f6110
    LEA EDX,[ESI + 0x320]               ; 004f603c
    LEA EAX,[ESI + 0x2d4]               ; 004f6042
    FLD float ptr [EDX]                 ; 004f6048
    FMUL float ptr [EAX]                ; 004f604a
    FSTP float ptr [EBP + -0x38]        ; 004f604c
    FLD float ptr [EDX + 0x4]           ; 004f604f
    FMUL float ptr [EAX]                ; 004f6052
    FSTP float ptr [EBP + -0x34]        ; 004f6054
    FLD float ptr [EDX + 0x8]           ; 004f6057
    FMUL float ptr [EAX]                ; 004f605a
    FSTP float ptr [EBP + -0x30]        ; 004f605c
    LEA EAX,[ESI + 0x314]               ; 004f605f
    FLD float ptr [ESI + 0x2d4]         ; 004f6065
    FLD1                                ; 004f606b
    FSUBRP                              ; 004f606d
    FLD float ptr [EAX]                 ; 004f606f
    FXCH                                ; 004f6071
    FSTP float ptr [EBP + -0x8]         ; 004f6073
    FMUL float ptr [EBP + -0x8]         ; 004f6076
    FSTP float ptr [EBP + -0x14]        ; 004f6079
    FLD float ptr [EAX + 0x4]           ; 004f607c
    FMUL float ptr [EBP + -0x8]         ; 004f607f
    FSTP float ptr [EBP + -0x10]        ; 004f6082
    FLD float ptr [EAX + 0x8]           ; 004f6085
    FMUL float ptr [EBP + -0x8]         ; 004f6088
    FLD float ptr [EBP + -0x14]         ; 004f608b
    FADD float ptr [EBP + -0x38]        ; 004f608e
    FLD float ptr [EBP + -0x10]         ; 004f6091
    FXCH                                ; 004f6094
    FSTP float ptr [EBP + -0x2c]        ; 004f6096
    MOV EAX,dword ptr [EBP + -0x2c]     ; 004f6099
    FADD float ptr [EBP + -0x34]        ; 004f609c
    FXCH                                ; 004f609f
    FST float ptr [EBP + -0xc]          ; 004f60a1
    FADD float ptr [EBP + -0x30]        ; 004f60a4
    FXCH                                ; 004f60a7
    FSTP float ptr [EBP + -0x28]        ; 004f60a9
    FSTP float ptr [EBP + -0x24]        ; 004f60ac
    MOV dword ptr [EDI],EAX             ; 004f60af
    MOV EAX,dword ptr [EBP + -0x28]     ; 004f60b1
    MOV dword ptr [EDI + 0x4],EAX       ; 004f60b4
    MOV EAX,dword ptr [EBP + -0x24]     ; 004f60b7
    MOV dword ptr [EDI + 0x8],EAX       ; 004f60ba
    LEA EAX,[ESI + 0x33c]               ; 004f60bd
    PUSH dword ptr [ESI + 0x2d4]        ; 004f60c3
    PUSH EAX                            ; 004f60c9
    ADD ESI,0x32c                       ; 004f60ca
    PUSH ESI                            ; 004f60d0
    LEA ESI,[EBP + -0x58]               ; 004f60d1
    CALL core_xform.cpp_slerpQuaternion_FUN_0055d2d0 ; 004f60d4
        ;   XREF to: 0055d2d0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_0055d2d0()
    ADD ESP,0xc                         ; 004f60d9
    LEA EAX,[EBP + -0x48]               ; 004f60dc
    LEA EDI,[EBP + -0x48]               ; 004f60df
    PUSH EAX                            ; 004f60e2
    LEA EAX,[EBP + -0x20]               ; 004f60e3
    LEA ESI,[EBP + -0x58]               ; 004f60e6
    PUSH EAX                            ; 004f60e9
    MOVSD ES:EDI,ESI                    ; 004f60ea
    MOVSD ES:EDI,ESI                    ; 004f60eb
    MOVSD ES:EDI,ESI                    ; 004f60ec
    MOVSD ES:EDI,ESI                    ; 004f60ed
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0 ; 004f60ee
        ;   XREF to: 0055d5b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToEulerAngles_FUN_0055d5b0()
    ADD ESP,0x8                         ; 004f60f3
    CMP EBX,EAX                         ; 004f60f6
    JNZ 0x004f6137                      ; 004f60f8
        ;   XREF to: 004f6137 (CONDITIONAL_JUMP)  ; LAB_004f6137
    MOV ESP,EBP                         ; 004f60fa
        ;   Label: LAB_004f60fa
    POP EBP                             ; 004f60fc
    POP EDI                             ; 004f60fd
    POP ESI                             ; 004f60fe
    POP EBX                             ; 004f60ff
    RET                                 ; 004f6100
    MOV dword ptr [ESI + 0x2d4],0x0     ; 004f6101
        ;   Label: LAB_004f6101
    JMP 0x004f600f                      ; 004f610b
        ;   XREF to: 004f600f (UNCONDITIONAL_JUMP)  ; LAB_004f600f
    LEA EAX,[ESI + 0x308]               ; 004f6110
        ;   Label: LAB_004f6110
    MOV EDX,dword ptr [EAX]             ; 004f6116
    PUSH EBX                            ; 004f6118
    MOV dword ptr [EBP + -0x4],EDX      ; 004f6119
    PUSH EDI                            ; 004f611c
    FILD dword ptr [EBP + -0x4]         ; 004f611d
    FMUL float ptr [ESI + 0x2d4]        ; 004f6120
    SUB ESP,0x4                         ; 004f6126
    FSTP float ptr [ESP]                ; 004f6129
    PUSH EAX                            ; 004f612c
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004f612d
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 004f6132
    JMP 0x004f60fa                      ; 004f6135
        ;   XREF to: 004f60fa (UNCONDITIONAL_JUMP)  ; LAB_004f60fa
    MOV EDX,dword ptr [EAX]             ; 004f6137
        ;   Label: LAB_004f6137
    MOV dword ptr [EBX],EDX             ; 004f6139
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f613b
    MOV dword ptr [EBX + 0x4],EDX       ; 004f613e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f6141
    MOV dword ptr [EBX + 0x8],EDX       ; 004f6144
    MOV ESP,EBP                         ; 004f6147
    POP EBP                             ; 004f6149
    POP EDI                             ; 004f614a
    POP ESI                             ; 004f614b
    POP EBX                             ; 004f614c
    RET                                 ; 004f614d

