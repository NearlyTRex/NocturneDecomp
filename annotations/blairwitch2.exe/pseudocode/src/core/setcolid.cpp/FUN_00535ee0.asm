; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setcolid_cpp_FUN_00535ee0(int param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[21]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a892
;   core_confedrt.cpp_FUN_005a14e0 at 005a1823
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0 at 0043a9a7
;   core_doc.cpp_FUN_0045ab40 at 0045acd0
;   core_doc.cpp_FUN_0045b510 at 0045b87c
;   core_elephant.cpp_CElephantGun_fire_FUN_00485b40 at 00485e3e
;   core_fire.cpp_CFireEffect_traceLaser_FUN_0049db20 at 0049dbc6
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0 at 004b14b9
;   core_gabriela.cpp_FUN_004aeb00 at 004af18b
;   core_game.cpp_FUN_004be8a0 at 004bee6b
;   ... and 11 more
;
; Referenced Globals:
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00472c60
;   core_setcolid.cpp_FUN_00536490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535ee0
        ;   Label: core_setcolid.cpp_FUN_00535ee0
    PUSH ESI                            ; 00535ee1
    PUSH EDI                            ; 00535ee2
    PUSH EBP                            ; 00535ee3
    SUB ESP,0x4c                        ; 00535ee4
    MOV EBX,dword ptr [ESP + 0x60]      ; 00535ee7
    MOV EBP,dword ptr [ESP + 0x64]      ; 00535eeb
    MOV ESI,dword ptr [ESP + 0x68]      ; 00535eef
    LEA EAX,[EBX + 0x14d110]            ; 00535ef3
    CMP EAX,EBP                         ; 00535ef9
    JNZ 0x00536069                      ; 00535efb
        ;   XREF to: 00536069 (CONDITIONAL_JUMP)  ; LAB_00536069
    LEA EAX,[EBX + 0x14d11c]            ; 00535f01
        ;   Label: LAB_00535f01
    CMP EAX,ESI                         ; 00535f07
    JZ 0x00535f1b                       ; 00535f09
        ;   XREF to: 00535f1b (CONDITIONAL_JUMP)  ; LAB_00535f1b
    MOV EDX,dword ptr [ESI]             ; 00535f0b
    MOV dword ptr [EAX],EDX             ; 00535f0d
    MOV EDX,dword ptr [ESI + 0x4]       ; 00535f0f
    MOV dword ptr [EAX + 0x4],EDX       ; 00535f12
    MOV EDX,dword ptr [ESI + 0x8]       ; 00535f15
    MOV dword ptr [EAX + 0x8],EDX       ; 00535f18
    LEA EAX,[EBX + 0x15f6ec]            ; 00535f1b
        ;   Label: LAB_00535f1b
    PUSH EAX                            ; 00535f21
    LEA EDI,[EBX + 0x15f6e0]            ; 00535f22
    PUSH EDI                            ; 00535f28
    PUSH ESI                            ; 00535f29
    PUSH EBP                            ; 00535f2a
    PUSH 0x1fc9c68                      ; 00535f2b | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_00472c60   ; 00535f30
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x5c],EAX      ; 00535f35
    FLD float ptr [ESP + 0x5c]          ; 00535f39
    LEA EAX,[EBX + 0x14d128]            ; 00535f3d
    FSTP float ptr [EBX + 0x15f6dc]     ; 00535f43
    ADD ESP,0x14                        ; 00535f49
    CMP EAX,EDI                         ; 00535f4c
    JZ 0x00535f60                       ; 00535f4e
        ;   XREF to: 00535f60 (CONDITIONAL_JUMP)  ; LAB_00535f60
    MOV EDX,dword ptr [EDI]             ; 00535f50
    MOV dword ptr [EAX],EDX             ; 00535f52
    MOV EDX,dword ptr [EDI + 0x4]       ; 00535f54
    MOV dword ptr [EAX + 0x4],EDX       ; 00535f57
    MOV EDX,dword ptr [EDI + 0x8]       ; 00535f5a
    MOV dword ptr [EAX + 0x8],EDX       ; 00535f5d
    FLD float ptr [EBX + 0x15f6dc]      ; 00535f60
        ;   Label: LAB_00535f60
    MOV EAX,dword ptr [EBX + 0x15f6ec]  ; 00535f66
    FLDZ                                ; 00535f6c
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00535f6e
    FCOMPP                              ; 00535f74
    FNSTSW AX                           ; 00535f76
    SAHF                                ; 00535f78
    JBE 0x00535f85                      ; 00535f79
        ;   XREF to: 00535f85 (CONDITIONAL_JUMP)  ; LAB_00535f85
    MOV dword ptr [EBX + 0x15f6dc],0x3f8147ae ; 00535f7b
    PUSH dword ptr [EBX + 0x15f6dc]     ; 00535f85
        ;   Label: LAB_00535f85
    PUSH ESI                            ; 00535f8b
    PUSH EBP                            ; 00535f8c
    PUSH 0xbf800000                     ; 00535f8d
    PUSH EBX                            ; 00535f92
    CALL core_setcolid.cpp_FUN_00536490 ; 00535f93
        ;   XREF to: 00536490 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00536490()
    MOV dword ptr [ESP + 0x5c],EAX      ; 00535f98
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00535f9c
    MOV dword ptr [EBX + 0x15f6d8],EAX  ; 00535fa0
    ADD ESP,0x14                        ; 00535fa6
    FLD float ptr [EBX + 0x15f6d8]      ; 00535fa9
    FLD1                                ; 00535faf
    FCOMPP                              ; 00535fb1
    FNSTSW AX                           ; 00535fb3
    SAHF                                ; 00535fb5
    JC 0x0053605b                       ; 00535fb6
        ;   XREF to: 0053605b (CONDITIONAL_JUMP)  ; LAB_0053605b
    FLD float ptr [ESI + 0x4]           ; 00535fbc
    FLD float ptr [ESI + 0x8]           ; 00535fbf
    FLD float ptr [ESI]                 ; 00535fc2
    LEA EDI,[ESP + 0x24]                ; 00535fc4
    LEA ESI,[ESP + 0x30]                ; 00535fc8
    FSUB float ptr [EBP]                ; 00535fcc
    FXCH ST2                            ; 00535fcf
    FSUB float ptr [EBP + 0x4]          ; 00535fd1
    FXCH                                ; 00535fd4
    FSUB float ptr [EBP + 0x8]          ; 00535fd6
    FXCH ST2                            ; 00535fd9
    FSTP float ptr [ESP + 0x30]         ; 00535fdb
    FSTP float ptr [ESP + 0x34]         ; 00535fdf
    FSTP float ptr [ESP + 0x38]         ; 00535fe3
    MOVSD ES:EDI,ESI                    ; 00535fe7
    MOVSD ES:EDI,ESI                    ; 00535fe8
    MOVSD ES:EDI,ESI                    ; 00535fe9
    LEA EAX,[EBX + 0x15f6d8]            ; 00535fea
    FLD float ptr [ESP + 0x24]          ; 00535ff0
    FMUL float ptr [EAX]                ; 00535ff4
    FLD float ptr [ESP + 0x28]          ; 00535ff6
    FMUL float ptr [EAX]                ; 00535ffa
    FLD float ptr [ESP + 0x2c]          ; 00535ffc
    FMUL float ptr [EAX]                ; 00536000
    LEA EDI,[ESP + 0xc]                 ; 00536002
    LEA ESI,[ESP + 0x3c]                ; 00536006
    FXCH ST2                            ; 0053600a
    FSTP float ptr [ESP + 0x3c]         ; 0053600c
    FSTP float ptr [ESP + 0x40]         ; 00536010
    FSTP float ptr [ESP + 0x44]         ; 00536014
    MOVSD ES:EDI,ESI                    ; 00536018
    MOVSD ES:EDI,ESI                    ; 00536019
    MOVSD ES:EDI,ESI                    ; 0053601a
    FLD float ptr [EBP]                 ; 0053601b
    FLD float ptr [EBP + 0x4]           ; 0053601e
    FLD float ptr [EBP + 0x8]           ; 00536021
    MOV EDI,ESP                         ; 00536024
    LEA ESI,[ESP + 0x18]                ; 00536026
    FXCH ST2                            ; 0053602a
    FADD float ptr [ESP + 0xc]          ; 0053602c
    FXCH                                ; 00536030
    FADD float ptr [ESP + 0x10]         ; 00536032
    FXCH ST2                            ; 00536036
    FADD float ptr [ESP + 0x14]         ; 00536038
    FXCH                                ; 0053603c
    FSTP float ptr [ESP + 0x18]         ; 0053603e
    FXCH                                ; 00536042
    FSTP float ptr [ESP + 0x1c]         ; 00536044
    FSTP float ptr [ESP + 0x20]         ; 00536048
    MOVSD ES:EDI,ESI                    ; 0053604c
    MOVSD ES:EDI,ESI                    ; 0053604d
    MOVSD ES:EDI,ESI                    ; 0053604e
    MOV EAX,ESP                         ; 0053604f
    LEA ESI,[EBX + 0x14d138]            ; 00536051
    CMP ESI,EAX                         ; 00536057
    JNZ 0x0053607f                      ; 00536059
        ;   XREF to: 0053607f (CONDITIONAL_JUMP)  ; LAB_0053607f
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 0053605b
        ;   Label: LAB_0053605b
    ADD ESP,0x4c                        ; 00536061
    POP EBP                             ; 00536064
    POP EDI                             ; 00536065
    POP ESI                             ; 00536066
    POP EBX                             ; 00536067
    RET                                 ; 00536068
    MOV EDX,dword ptr [EBP]             ; 00536069
        ;   Label: LAB_00536069
    MOV dword ptr [EAX],EDX             ; 0053606c
    MOV EDX,dword ptr [EBP + 0x4]       ; 0053606e
    MOV dword ptr [EAX + 0x4],EDX       ; 00536071
    MOV EDX,dword ptr [EBP + 0x8]       ; 00536074
    MOV dword ptr [EAX + 0x8],EDX       ; 00536077
    JMP 0x00535f01                      ; 0053607a
        ;   XREF to: 00535f01 (UNCONDITIONAL_JUMP)  ; LAB_00535f01
    MOV EAX,dword ptr [ESP]             ; 0053607f
        ;   Label: LAB_0053607f
    MOV dword ptr [ESI],EAX             ; 00536082
    MOV EAX,dword ptr [ESP + 0x4]       ; 00536084
    MOV dword ptr [ESI + 0x4],EAX       ; 00536088
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053608b
    MOV dword ptr [ESI + 0x8],EAX       ; 0053608f
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 00536092
    ADD ESP,0x4c                        ; 00536098
    POP EBP                             ; 0053609b
    POP EDI                             ; 0053609c
    POP ESI                             ; 0053609d
    POP EBX                             ; 0053609e
    RET                                 ; 0053609f

