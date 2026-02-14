; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_flamecan_cpp_CFlameCan_getTargetPoints_FUN_004cb580(CFlameCan *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   float FLOAT_0062a2ec = 0.5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb580
        ;   Label: core_flamecan.cpp_CFlameCan_getTargetPoints_FUN_004cb580
    SUB ESP,0x30                        ; 004cb581
    MOV ECX,dword ptr [ESP + 0x38]      ; 004cb584
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004cb588
    MOV EDX,ESP                         ; 004cb58c
    PUSH EDX                            ; 004cb58e
    MOV EAX,dword ptr [ECX + 0x154]     ; 004cb58f
    PUSH ECX                            ; 004cb595
    CALL dword ptr [EAX + 0x14]         ; 004cb596
    LEA EDX,[EAX + 0xc]                 ; 004cb599
    FLD float ptr [EAX]                 ; 004cb59c
    FADD float ptr [EDX]                ; 004cb59e
    ADD ESP,0x8                         ; 004cb5a0
    FST float ptr [ESP + 0x18]          ; 004cb5a3
    FLD float ptr [EAX + 0x4]           ; 004cb5a7
    FADD float ptr [EDX + 0x4]          ; 004cb5aa
    FXCH                                ; 004cb5ad
    FLD float ptr [0x0062a2ec]          ; 004cb5af | FLOAT_0062a2ec
    FXCH                                ; 004cb5b5
    FMUL ST1                            ; 004cb5b7
    FXCH ST2                            ; 004cb5b9
    FST float ptr [ESP + 0x1c]          ; 004cb5bb
    FLD float ptr [EAX + 0x8]           ; 004cb5bf
    FADD float ptr [EDX + 0x8]          ; 004cb5c2
    FXCH                                ; 004cb5c5
    FMUL ST2                            ; 004cb5c7
    FXCH                                ; 004cb5c9
    FST float ptr [ESP + 0x20]          ; 004cb5cb
    FMULP ST2                           ; 004cb5cf
    LEA EAX,[ESP + 0x24]                ; 004cb5d1
    FXCH ST2                            ; 004cb5d5
    FSTP float ptr [ESP + 0x24]         ; 004cb5d7
    FXCH                                ; 004cb5db
    FSTP float ptr [ESP + 0x28]         ; 004cb5dd
    FSTP float ptr [ESP + 0x2c]         ; 004cb5e1
    CMP EBX,EAX                         ; 004cb5e5
    JNZ 0x004cb5f3                      ; 004cb5e7
        ;   XREF to: 004cb5f3 (CONDITIONAL_JUMP)  ; LAB_004cb5f3
    MOV EAX,0x1                         ; 004cb5e9
    ADD ESP,0x30                        ; 004cb5ee
    POP EBX                             ; 004cb5f1
    RET                                 ; 004cb5f2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004cb5f3
        ;   Label: LAB_004cb5f3
    MOV dword ptr [EBX],EAX             ; 004cb5f7
    MOV EAX,dword ptr [ESP + 0x28]      ; 004cb5f9
    MOV dword ptr [EBX + 0x4],EAX       ; 004cb5fd
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004cb600
    MOV dword ptr [EBX + 0x8],EAX       ; 004cb604
    MOV EAX,0x1                         ; 004cb607
    ADD ESP,0x30                        ; 004cb60c
    POP EBX                             ; 004cb60f
    RET                                 ; 004cb610

