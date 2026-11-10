; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_turret_cpp_CTurret_getMuzzlePoint_FUN_005a3840(CTurret *this_ptr,CVector3f *out_point)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005a3840
        ;   Label: core_turret.cpp_CTurret_getMuzzlePoint_FUN_005a3840
    SUB ESP,0xc                         ; 005a3841
    MOV EAX,ESI                         ; 005a3844
    MOV ESI,dword ptr [ESP + 0x14]      ; 005a3846
    MOV EDI,ESP                         ; 005a384a
    LEA ESI,[ESI + 0x860]               ; 005a384c
    MOVSD ES:EDI,ESI                    ; 005a3852
    MOVSD ES:EDI,ESI                    ; 005a3853
    MOVSD ES:EDI,ESI                    ; 005a3854
    MOV ESI,ESP                         ; 005a3855
    MOV EDI,EAX                         ; 005a3857
    MOVSD ES:EDI,ESI                    ; 005a3859
    MOVSD ES:EDI,ESI                    ; 005a385a
    MOVSD ES:EDI,ESI                    ; 005a385b
    ADD ESP,0xc                         ; 005a385c
    POP EDI                             ; 005a385f
    RET                                 ; 005a3860

