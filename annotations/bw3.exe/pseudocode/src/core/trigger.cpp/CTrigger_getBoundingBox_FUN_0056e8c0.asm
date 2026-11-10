; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_trigger_cpp_CTrigger_getBoundingBox_FUN_0056e8c0(CTrigger *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005d661b
;   undefined4 DAT_005d6623
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0056e8c0
        ;   Label: core_trigger.cpp_CTrigger_getBoundingBox_FUN_0056e8c0
    SUB ESP,0x18                        ; 0056e8c1
    MOV EDX,dword ptr [ESP + 0x20]      ; 0056e8c4
    MOV EAX,ESI                         ; 0056e8c8
    FLD double ptr [0x005d661b]         ; 0056e8ca | DAT_005d661b
    FLD float ptr [EDX + 0x160]         ; 0056e8d0
    FMUL ST1                            ; 0056e8d6
    FLD float ptr [EDX + 0x168]         ; 0056e8d8
    FMUL ST2                            ; 0056e8de
    FLD float ptr [EDX + 0x160]         ; 0056e8e0
    FCHS                                ; 0056e8e6
    FMUL ST3                            ; 0056e8e8
    FLD float ptr [EDX + 0x168]         ; 0056e8ea
    FCHS                                ; 0056e8f0
    FMULP ST4                           ; 0056e8f2
    FLD float ptr [EDX + 0x164]         ; 0056e8f4
    MOV ECX,0xbdcccccd                  ; 0056e8fa
    MOV EDI,ESI                         ; 0056e8ff
    MOV ESI,ESP                         ; 0056e901
    MOV dword ptr [ESP + 0x4],ECX       ; 0056e903
    FADD double ptr [0x005d6623]        ; 0056e907 | DAT_005d6623
    FXCH ST3                            ; 0056e90d
    FSTP float ptr [ESP + 0xc]          ; 0056e90f
    FXCH ST2                            ; 0056e913
    FSTP float ptr [ESP + 0x10]         ; 0056e915
    FSTP float ptr [ESP + 0x14]         ; 0056e919
    MOV ECX,0x6                         ; 0056e91d
    FXCH                                ; 0056e922
    FSTP float ptr [ESP + 0x8]          ; 0056e924
    FSTP float ptr [ESP]                ; 0056e928
    MOVSD.REP ES:EDI,ESI                ; 0056e92b
    ADD ESP,0x18                        ; 0056e92d
    POP EDI                             ; 0056e930
    RET                                 ; 0056e931

