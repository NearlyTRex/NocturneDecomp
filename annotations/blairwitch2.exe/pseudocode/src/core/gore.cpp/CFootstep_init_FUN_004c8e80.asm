; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CFootstep_init_FUN_004c8e80(CFootstep *this_ptr,CVector3f *position,UOrientationVector *orientation,int is_bloody,int alpha,EBloodType blood_type)
;
; Parameters:
; CFootstep *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; UOrientationVector * Stack[0xc]:4   orientation
; int              Stack[0x10]:4   is_bloody
; int              Stack[0x14]:4   alpha
; EBloodType       Stack[0x18]:4   blood_type
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gore.cpp_CGore_createFootstep_FUN_004c9d00 at 004c9d60
;
; Referenced Globals:
;   undefined4 DAT_005d9532
;   undefined4 DAT_005d953a
;   undefined4 DAT_005d9542
;   undefined4 DAT_005d9546
;   undefined4 DAT_00617948
;   undefined4 DAT_0061794c
;   undefined4 DAT_00617958
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00472c60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8e80
        ;   Label: core_gore.cpp_CFootstep_init_FUN_004c8e80
    PUSH ESI                            ; 004c8e81
    PUSH EDI                            ; 004c8e82
    PUSH EBP                            ; 004c8e83
    MOV EBP,ESP                         ; 004c8e84
    SUB ESP,0x2c                        ; 004c8e86
    AND ESP,0xfffffff8                  ; 004c8e89
    MOV EDI,dword ptr [EBP + 0x18]      ; 004c8e8c
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c8e8f
    XOR EBX,EBX                         ; 004c8e92
    ADD ESI,0x8                         ; 004c8e94
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004c8e97
        ;   Label: LAB_004c8e97
    FLD float ptr [EAX + 0x4]           ; 004c8e9a
    FLD ST0                             ; 004c8e9d
    FSIN                                ; 004c8e9f
    FXCH                                ; 004c8ea1
    FCOS                                ; 004c8ea3
    FXCH                                ; 004c8ea5
    FLD double ptr [0x005d9532]         ; 004c8ea7 | DAT_005d9532
    FXCH                                ; 004c8ead
    FMUL ST1                            ; 004c8eaf
    FXCH ST2                            ; 004c8eb1
    FMULP                               ; 004c8eb3
    FLD ST1                             ; 004c8eb5
    FMUL float ptr [EBX + 0x617948]     ; 004c8eb7 | DAT_00617948 | DAT_0061794c
    FLD ST1                             ; 004c8ebd
    FCHS                                ; 004c8ebf
    FMUL float ptr [EBX + 0x617948]     ; 004c8ec1 | DAT_00617948 | DAT_0061794c
    FXCH ST2                            ; 004c8ec7
    FMUL float ptr [EBX + 0x617958]     ; 004c8ec9 | DAT_00617958
    XOR EDX,EDX                         ; 004c8ecf
    FXCH ST3                            ; 004c8ed1
    FMUL float ptr [EBX + 0x617958]     ; 004c8ed3 | DAT_00617958
    MOV dword ptr [ESP + 0x4],EDX       ; 004c8ed9
    FXCH ST3                            ; 004c8edd
    FADDP                               ; 004c8edf
    FXCH ST2                            ; 004c8ee1
    FADDP                               ; 004c8ee3
    FXCH                                ; 004c8ee5
    FSTP float ptr [ESP + 0x8]          ; 004c8ee7
    FST float ptr [ESP]                 ; 004c8eeb
    FADD float ptr [EDI]                ; 004c8eee
    FSTP float ptr [ESP]                ; 004c8ef0
    MOV EAX,dword ptr [EDI + 0x4]       ; 004c8ef3
    LEA EDX,[ESP + 0xc]                 ; 004c8ef6
    MOV dword ptr [ESP + 0x4],EAX       ; 004c8efa
    FLD float ptr [ESP + 0x8]           ; 004c8efe
    FADD float ptr [EDI + 0x8]          ; 004c8f02
    MOV EAX,ESP                         ; 004c8f05
    FSTP float ptr [ESP + 0x8]          ; 004c8f07
    CMP EDX,EAX                         ; 004c8f0b
    JZ 0x004c8f26                       ; 004c8f0d
        ;   XREF to: 004c8f26 (CONDITIONAL_JUMP)  ; LAB_004c8f26
    MOV EAX,dword ptr [ESP]             ; 004c8f0f
    MOV dword ptr [ESP + 0xc],EAX       ; 004c8f12
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c8f16
    MOV dword ptr [ESP + 0x10],EAX      ; 004c8f1a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c8f1e
    MOV dword ptr [ESP + 0x14],EAX      ; 004c8f22
    FLD1                                ; 004c8f26
        ;   Label: LAB_004c8f26
    PUSH 0x0                            ; 004c8f28
    FLD float ptr [ESP + 0x14]          ; 004c8f2a
    LEA EAX,[ESP + 0x10]                ; 004c8f2e
    PUSH 0x0                            ; 004c8f32
    FXCH                                ; 004c8f34
    FADD float ptr [ESP + 0xc]          ; 004c8f36
    PUSH EAX                            ; 004c8f3a
    LEA EAX,[ESP + 0xc]                 ; 004c8f3b
    FXCH                                ; 004c8f3f
    FADD float ptr [0x005d9542]         ; 004c8f41 | DAT_005d9542
    PUSH EAX                            ; 004c8f47
    FXCH                                ; 004c8f48
    FSTP float ptr [ESP + 0x14]         ; 004c8f4a
    PUSH 0x1fc9c68                      ; 004c8f4e | g_CDemonRaytraceInstance
    FSTP float ptr [ESP + 0x24]         ; 004c8f53
    CALL core_dtrace.cpp_FUN_00472c60   ; 004c8f57
        ;   XREF to: 00472c60 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00472c60()
    MOV dword ptr [ESP + 0x3c],EAX      ; 004c8f5c
    FLD float ptr [ESP + 0x3c]          ; 004c8f60
    FMUL double ptr [0x005d953a]        ; 004c8f64 | DAT_005d953a
    ADD ESP,0x14                        ; 004c8f6a
    FSUBR float ptr [ESP + 0x4]         ; 004c8f6d
    FADD float ptr [0x005d9546]         ; 004c8f71 | DAT_005d9546
    MOV EAX,ESP                         ; 004c8f77
    FSTP float ptr [ESP + 0x4]          ; 004c8f79
    CMP ESI,EAX                         ; 004c8f7d
    JZ 0x004c8f94                       ; 004c8f7f
        ;   XREF to: 004c8f94 (CONDITIONAL_JUMP)  ; LAB_004c8f94
    MOV EAX,dword ptr [ESP]             ; 004c8f81
    MOV dword ptr [ESI],EAX             ; 004c8f84
    MOV EAX,dword ptr [ESP + 0x4]       ; 004c8f86
    MOV dword ptr [ESI + 0x4],EAX       ; 004c8f8a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c8f8d
    MOV dword ptr [ESI + 0x8],EAX       ; 004c8f91
    ADD EBX,0x4                         ; 004c8f94
        ;   Label: LAB_004c8f94
    ADD ESI,0xc                         ; 004c8f97
    CMP EBX,0x10                        ; 004c8f9a
    JNZ 0x004c8e97                      ; 004c8f9d
        ;   XREF to: 004c8e97 (CONDITIONAL_JUMP)  ; LAB_004c8e97
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c8fa3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c8fa6
    ADD EBX,0xc                         ; 004c8fa9
    ADD EDX,0x30                        ; 004c8fac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c8faf
        ;   Label: LAB_004c8faf
    FLD float ptr [EAX + 0xc]           ; 004c8fb2
    FSUB float ptr [EBX + 0xc]          ; 004c8fb5
    FABS                                ; 004c8fb8
    FCOMP double ptr [0x005d9532]       ; 004c8fba | DAT_005d9532
    FNSTSW AX                           ; 004c8fc0
    SAHF                                ; 004c8fc2
    JBE 0x004c8fce                      ; 004c8fc3
        ;   XREF to: 004c8fce (CONDITIONAL_JUMP)  ; LAB_004c8fce
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c8fc5
    MOV ECX,dword ptr [EAX + 0xc]       ; 004c8fc8
    MOV dword ptr [EBX + 0xc],ECX       ; 004c8fcb
    ADD EBX,0xc                         ; 004c8fce
        ;   Label: LAB_004c8fce
    CMP EBX,EDX                         ; 004c8fd1
    JNZ 0x004c8faf                      ; 004c8fd3
        ;   XREF to: 004c8faf (CONDITIONAL_JUMP)  ; LAB_004c8faf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c8fd5
    MOV EDX,dword ptr [EBP + 0x24]      ; 004c8fd8
    MOV dword ptr [EAX],0x0             ; 004c8fdb
    MOV dword ptr [EAX + 0x38],EDX      ; 004c8fe1
    MOV EDX,dword ptr [EBP + 0x20]      ; 004c8fe4
    MOV dword ptr [EAX + 0x3c],EDX      ; 004c8fe7
    MOV EDX,dword ptr [EBP + 0x28]      ; 004c8fea
    MOV dword ptr [EAX + 0x4],EDX       ; 004c8fed
    MOV ESP,EBP                         ; 004c8ff0
    POP EBP                             ; 004c8ff2
    POP EDI                             ; 004c8ff3
    POP ESI                             ; 004c8ff4
    POP EBX                             ; 004c8ff5
    RET                                 ; 004c8ff6

