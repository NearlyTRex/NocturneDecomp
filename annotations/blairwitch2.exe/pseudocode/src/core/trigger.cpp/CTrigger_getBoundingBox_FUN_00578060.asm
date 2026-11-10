; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_00578060(CTrigger *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005ecd92
;   undefined4 DAT_005ecd9a
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00578060
        ;   Label: core_trigger.cpp_CTrigger_getBoundingBox_FUN_00578060
    SUB ESP,0x18                        ; 00578061
    MOV EDX,dword ptr [ESP + 0x20]      ; 00578064
    MOV EAX,ESI                         ; 00578068
    FLD double ptr [0x005ecd92]         ; 0057806a | DAT_005ecd92
    FLD float ptr [EDX + 0x2bc]         ; 00578070
    FMUL ST1                            ; 00578076
    FLD float ptr [EDX + 0x2c4]         ; 00578078
    FMUL ST2                            ; 0057807e
    FLD float ptr [EDX + 0x2bc]         ; 00578080
    FCHS                                ; 00578086
    FMUL ST3                            ; 00578088
    FLD float ptr [EDX + 0x2c4]         ; 0057808a
    FCHS                                ; 00578090
    FMULP ST4                           ; 00578092
    FLD float ptr [EDX + 0x2c0]         ; 00578094
    MOV ECX,0xbdcccccd                  ; 0057809a
    MOV EDI,ESI                         ; 0057809f
    MOV ESI,ESP                         ; 005780a1
    MOV dword ptr [ESP + 0x4],ECX       ; 005780a3
    FADD double ptr [0x005ecd9a]        ; 005780a7 | DAT_005ecd9a
    FXCH ST3                            ; 005780ad
    FSTP float ptr [ESP + 0xc]          ; 005780af
    FXCH ST2                            ; 005780b3
    FSTP float ptr [ESP + 0x10]         ; 005780b5
    FSTP float ptr [ESP + 0x14]         ; 005780b9
    MOV ECX,0x6                         ; 005780bd
    FXCH                                ; 005780c2
    FSTP float ptr [ESP + 0x8]          ; 005780c4
    FSTP float ptr [ESP]                ; 005780c8
    MOVSD.REP ES:EDI,ESI                ; 005780cb
    ADD ESP,0x18                        ; 005780cd
    POP EDI                             ; 005780d0
    RET                                 ; 005780d1

