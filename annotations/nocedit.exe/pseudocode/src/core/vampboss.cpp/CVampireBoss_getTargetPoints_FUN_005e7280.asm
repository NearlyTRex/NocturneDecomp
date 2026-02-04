; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_vampboss_cpp_CVampireBoss_getTargetPoints_FUN_005e7280 (CVampireBoss *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   float FLOAT_00656cab = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7280
        ;   Label: core_vampboss.cpp_CVampireBoss_getTargetPoints_FUN_005e7280
    SUB ESP,0x30                        ; 005e7281
    MOV ECX,dword ptr [ESP + 0x38]      ; 005e7284
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005e7288
    MOV EDX,ESP                         ; 005e728c
    PUSH EDX                            ; 005e728e
    MOV EAX,dword ptr [ECX + 0x154]     ; 005e728f
    PUSH ECX                            ; 005e7295
    CALL dword ptr [EAX + 0x14]         ; 005e7296
    LEA EDX,[EAX + 0xc]                 ; 005e7299
    FLD float ptr [EAX]                 ; 005e729c
    FADD float ptr [EDX]                ; 005e729e
    ADD ESP,0x8                         ; 005e72a0
    FST float ptr [ESP + 0x18]          ; 005e72a3
    FLD float ptr [EAX + 0x4]           ; 005e72a7
    FADD float ptr [EDX + 0x4]          ; 005e72aa
    FXCH                                ; 005e72ad
    FLD float ptr [0x00656cab]          ; 005e72af | FLOAT_00656cab
    FXCH                                ; 005e72b5
    FMUL ST1                            ; 005e72b7
    FXCH ST2                            ; 005e72b9
    FST float ptr [ESP + 0x1c]          ; 005e72bb
    FLD float ptr [EAX + 0x8]           ; 005e72bf
    FADD float ptr [EDX + 0x8]          ; 005e72c2
    FXCH                                ; 005e72c5
    FMUL ST2                            ; 005e72c7
    FXCH                                ; 005e72c9
    FST float ptr [ESP + 0x20]          ; 005e72cb
    FMULP ST2                           ; 005e72cf
    LEA EAX,[ESP + 0x24]                ; 005e72d1
    FXCH ST2                            ; 005e72d5
    FSTP float ptr [ESP + 0x24]         ; 005e72d7
    FXCH                                ; 005e72db
    FSTP float ptr [ESP + 0x28]         ; 005e72dd
    FSTP float ptr [ESP + 0x2c]         ; 005e72e1
    CMP EBX,EAX                         ; 005e72e5
    JNZ 0x005e72f3                      ; 005e72e7
        ;   XREF to: 005e72f3 (CONDITIONAL_JUMP)  ; LAB_005e72f3
    MOV EAX,0x1                         ; 005e72e9
    ADD ESP,0x30                        ; 005e72ee
    POP EBX                             ; 005e72f1
    RET                                 ; 005e72f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 005e72f3
        ;   Label: LAB_005e72f3
    MOV dword ptr [EBX],EAX             ; 005e72f7
    MOV EAX,dword ptr [ESP + 0x28]      ; 005e72f9
    MOV dword ptr [EBX + 0x4],EAX       ; 005e72fd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005e7300
    MOV dword ptr [EBX + 0x8],EAX       ; 005e7304
    MOV EAX,0x1                         ; 005e7307
    ADD ESP,0x30                        ; 005e730c
    POP EBX                             ; 005e730f
    RET                                 ; 005e7310

