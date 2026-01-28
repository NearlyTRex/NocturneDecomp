; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bat_cpp_CBat_process_FUN_00414a00(CBat *this_ptr,float delta_time)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x58]:8  local_58
; undefined8       Stack[-0x50]:8  local_50
; undefined8       Stack[-0x48]:8  local_48
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double DOUBLE_00615366 = 4
;   double DOUBLE_0061536e = 35
;   double DOUBLE_00615376 = 10
;   double DOUBLE_0061537e = 60
;   double DOUBLE_00615386 = 0.700000000000000
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_bat.cpp_FUN_00414ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414a00
        ;   Label: core_bat.cpp_CBat_process_FUN_00414a00
    PUSH ESI                            ; 00414a01
    PUSH EBP                            ; 00414a02
    MOV EBP,ESP                         ; 00414a03
    SUB ESP,0x28                        ; 00414a05
    AND ESP,0xfffffff8                  ; 00414a08
    MOV EBX,dword ptr [EBP + 0x10]      ; 00414a0b
    LEA ESI,[EBX + 0x20]                ; 00414a0e
    MOV EAX,dword ptr [ESI]             ; 00414a11
    MOV dword ptr [ESP + 0x10],EAX      ; 00414a13
    LEA EAX,[ESI + 0x4]                 ; 00414a17
    MOV EAX,dword ptr [EAX]             ; 00414a1a
    MOV dword ptr [ESP + 0x14],EAX      ; 00414a1c
    LEA EAX,[ESI + 0x8]                 ; 00414a20
    MOV EAX,dword ptr [EAX]             ; 00414a23
    MOV dword ptr [ESP + 0x18],EAX      ; 00414a25
    FLD float ptr [EBX + 0x308]         ; 00414a29
    FMUL float ptr [EBP + 0x14]         ; 00414a2f
    FADD float ptr [EBX + 0x304]        ; 00414a32
    PUSH EBX                            ; 00414a38
    FSTP float ptr [EBX + 0x304]        ; 00414a39
    CALL core_bat.cpp_FUN_00414ce0      ; 00414a3f
        ;   XREF to: 00414ce0 (UNCONDITIONAL_CALL)  ; undefined core_bat.cpp_FUN_00414ce0()
    ADD ESP,0x4                         ; 00414a44
    FLD float ptr [ESI]                 ; 00414a47
    FSUB float ptr [ESP + 0x10]         ; 00414a49
    FSTP float ptr [ESP + 0x4]          ; 00414a4d
    FLD float ptr [ESI + 0x4]           ; 00414a51
    FSUB float ptr [ESP + 0x14]         ; 00414a54
    FST float ptr [ESP + 0x8]           ; 00414a58
    FMUL double ptr [0x00615366]        ; 00414a5c | DOUBLE_00615366
    FDIV float ptr [EBP + 0x14]         ; 00414a62
    FLD float ptr [ESI + 0x8]           ; 00414a65
    FSUB float ptr [ESP + 0x18]         ; 00414a68
    FXCH                                ; 00414a6c
    FADD double ptr [0x0061536e]        ; 00414a6e | DOUBLE_0061536e
    FXCH                                ; 00414a74
    FSTP float ptr [ESP + 0xc]          ; 00414a76
    FST float ptr [ESP]                 ; 00414a7a
    FCOMP double ptr [0x00615376]       ; 00414a7d | DOUBLE_00615376
    FNSTSW AX                           ; 00414a83
    SAHF                                ; 00414a85
    JC 0x00414b3a                       ; 00414a86
        ;   XREF to: 00414b3a (CONDITIONAL_JUMP)  ; LAB_00414b3a
    FLD float ptr [ESP]                 ; 00414a8c
        ;   Label: LAB_00414a8c
    FCOMP double ptr [0x0061537e]       ; 00414a8f | DOUBLE_0061537e
    FNSTSW AX                           ; 00414a95
    SAHF                                ; 00414a97
    JBE 0x00414aa1                      ; 00414a98
        ;   XREF to: 00414aa1 (CONDITIONAL_JUMP)  ; LAB_00414aa1
    MOV dword ptr [ESP],0x42700000      ; 00414a9a
    FLD float ptr [ESP]                 ; 00414aa1
        ;   Label: LAB_00414aa1
    FSUB float ptr [EBX + 0x310]        ; 00414aa4
    FMUL double ptr [0x00615386]        ; 00414aaa | DOUBLE_00615386
    FLD float ptr [EBX + 0x310]         ; 00414ab0
    FXCH                                ; 00414ab6
    FADD ST0,ST1                        ; 00414ab8
    FLD float ptr [EBP + 0x14]          ; 00414aba
    FXCH                                ; 00414abd
    FSTP ST2                            ; 00414abf
    FXCH                                ; 00414ac1
    FSTP float ptr [EBX + 0x310]        ; 00414ac3
    FMUL float ptr [EBX + 0x310]        ; 00414ac9
    FMUL float ptr [EBX + 0x30c]        ; 00414acf
    LEA EAX,[EBX + 0x188]               ; 00414ad5
    FADD float ptr [EBX + 0x184]        ; 00414adb
    PUSH EAX                            ; 00414ae1
    FSTP float ptr [EBX + 0x184]        ; 00414ae2
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 00414ae8
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00414aed
    MOV ESI,dword ptr [EAX + 0x100]     ; 00414af0
    MOV dword ptr [ESP + 0x24],ESI      ; 00414af6
    FILD dword ptr [ESP + 0x24]         ; 00414afa
    FCOMP float ptr [EBX + 0x184]       ; 00414afe
    FNSTSW AX                           ; 00414b04
    SAHF                                ; 00414b06
    JA 0x00414b46                       ; 00414b07
        ;   XREF to: 00414b46 (CONDITIONAL_JUMP)  ; LAB_00414b46
    MOV dword ptr [EBX + 0x184],0x0     ; 00414b09
    CMP byte ptr [EBX + 0x314],0x0      ; 00414b13
        ;   Label: LAB_00414b13
    JZ 0x00414b34                       ; 00414b1a
        ;   XREF to: 00414b34 (CONDITIONAL_JUMP)  ; LAB_00414b34
    FLD float ptr [EBX + 0x384]         ; 00414b1c
    FSUB float ptr [EBP + 0x14]         ; 00414b22
    FST float ptr [EBX + 0x384]         ; 00414b25
    FLDZ                                ; 00414b2b
    FCOMPP                              ; 00414b2d
    FNSTSW AX                           ; 00414b2f
    SAHF                                ; 00414b31
    JNC 0x00414b64                      ; 00414b32
        ;   XREF to: 00414b64 (CONDITIONAL_JUMP)  ; LAB_00414b64
    MOV ESP,EBP                         ; 00414b34
        ;   Label: LAB_00414b34
    POP EBP                             ; 00414b36
    POP ESI                             ; 00414b37
    POP EBX                             ; 00414b38
    RET                                 ; 00414b39
    MOV dword ptr [ESP],0x41200000      ; 00414b3a
        ;   Label: LAB_00414b3a
    JMP 0x00414a8c                      ; 00414b41
        ;   XREF to: 00414a8c (UNCONDITIONAL_JUMP)  ; LAB_00414a8c
    FLDZ                                ; 00414b46
        ;   Label: LAB_00414b46
    FCOMP float ptr [EBX + 0x184]       ; 00414b48
    FNSTSW AX                           ; 00414b4e
    SAHF                                ; 00414b50
    JBE 0x00414b13                      ; 00414b51
        ;   XREF to: 00414b13 (CONDITIONAL_JUMP)  ; LAB_00414b13
    DEC ESI                             ; 00414b53
    MOV dword ptr [ESP + 0x24],ESI      ; 00414b54
    FILD dword ptr [ESP + 0x24]         ; 00414b58
    FSTP float ptr [EBX + 0x184]        ; 00414b5c
    JMP 0x00414b13                      ; 00414b62
        ;   XREF to: 00414b13 (UNCONDITIONAL_JUMP)  ; LAB_00414b13
    MOV ESI,dword ptr [EBX + 0x380]     ; 00414b64
        ;   Label: LAB_00414b64
    PUSH ESI                            ; 00414b6a
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00414b6b
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00414b70
    TEST EAX,EAX                        ; 00414b73
    JNZ 0x00414bbe                      ; 00414b75
        ;   XREF to: 00414bbe (CONDITIONAL_JUMP)  ; LAB_00414bbe
    PUSH 0x40490000                     ; 00414b77
    PUSH EAX                            ; 00414b7c
    SUB ESP,0x8                         ; 00414b7d
    FLD float ptr [EBX + 0x28]          ; 00414b80
    FSTP double ptr [ESP]               ; 00414b83
    SUB ESP,0x8                         ; 00414b86
    FLD float ptr [EBX + 0x24]          ; 00414b89
    FSTP double ptr [ESP]               ; 00414b8c
    SUB ESP,0x8                         ; 00414b8f
    FLD float ptr [EBX + 0x20]          ; 00414b92
    FSTP double ptr [ESP]               ; 00414b95
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290 ; 00414b98
        ;   XREF to: 005aa290 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290(double pos_x, double pos_y, double pos_z, double radius)
    ADD ESP,0x20                        ; 00414b9d
    TEST EAX,EAX                        ; 00414ba0
    JZ 0x00414bbe                       ; 00414ba2
        ;   XREF to: 00414bbe (CONDITIONAL_JUMP)  ; LAB_00414bbe
    LEA EAX,[EBX + 0x314]               ; 00414ba4
    PUSH EAX                            ; 00414baa
    MOV ESI,dword ptr [EBX + 0x154]     ; 00414bab
    PUSH EBX                            ; 00414bb1
    CALL dword ptr [ESI + 0x28]         ; 00414bb2
    ADD ESP,0x8                         ; 00414bb5
    MOV dword ptr [EBX + 0x380],EAX     ; 00414bb8
    PUSH dword ptr [EBX + 0x37c]        ; 00414bbe
        ;   Label: LAB_00414bbe
    PUSH dword ptr [EBX + 0x378]        ; 00414bc4
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00414bca
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

