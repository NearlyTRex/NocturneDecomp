; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_enemy_cpp_CEnemy_getTargetPoint_FUN_00479a30(CEnemy *this_ptr,CVector3f *out_point)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   double DOUBLE_0057f35f = 5.22209901682860E-315
;   double DOUBLE_0057f367 = 0.166666666666667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479a30
        ;   Label: core_enemy.cpp_CEnemy_getTargetPoint_FUN_00479a30
    PUSH EBP                            ; 00479a31
    MOV EBP,ESP                         ; 00479a32
    SUB ESP,0x24                        ; 00479a34
    AND ESP,0xfffffff8                  ; 00479a37
    MOV ECX,dword ptr [EBP + 0xc]       ; 00479a3a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00479a3d
    MOV EAX,ESP                         ; 00479a40
    PUSH EAX                            ; 00479a42
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00479a43
    PUSH ECX                            ; 00479a49
    CALL dword ptr [EDX + 0x14]         ; 00479a4a
    ADD ESP,0x8                         ; 00479a4d
    FLD float ptr [ESP]                 ; 00479a50
    FADD float ptr [ESP + 0xc]          ; 00479a53
    FST float ptr [ESP + 0x18]          ; 00479a57
    FLD float ptr [0x0057f35f]          ; 00479a5b | DOUBLE_0057f35f
    FXCH                                ; 00479a61
    FMUL ST1                            ; 00479a63
    FLD float ptr [ESP + 0x8]           ; 00479a65
    FLD float ptr [ESP + 0x4]           ; 00479a69
    FADD float ptr [ESP + 0x10]         ; 00479a6d
    FXCH                                ; 00479a71
    FADD float ptr [ESP + 0x14]         ; 00479a73
    FXCH                                ; 00479a77
    FSTP float ptr [ESP + 0x1c]         ; 00479a79
    FSTP float ptr [ESP + 0x20]         ; 00479a7d
    FSTP float ptr [EBX]                ; 00479a81
    FLD float ptr [ESP + 0x1c]          ; 00479a83
    FMUL ST1                            ; 00479a87
    FSTP float ptr [EBX + 0x4]          ; 00479a89
    FMUL float ptr [ESP + 0x20]         ; 00479a8c
    FSTP float ptr [EBX + 0x8]          ; 00479a90
    FLD float ptr [ESP + 0x10]          ; 00479a93
    FSUB float ptr [ESP + 0x4]          ; 00479a97
    FMUL double ptr [0x0057f367]        ; 00479a9b | DOUBLE_0057f367
    FSUBR float ptr [ESP + 0x10]        ; 00479aa1
    MOV EAX,EBX                         ; 00479aa5
    FSTP float ptr [EBX + 0x4]          ; 00479aa7
    MOV ESP,EBP                         ; 00479aaa
    POP EBP                             ; 00479aac
    POP EBX                             ; 00479aad
    RET                                 ; 00479aae

