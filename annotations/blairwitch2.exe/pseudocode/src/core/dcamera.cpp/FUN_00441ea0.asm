; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00441ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005ce63e
;
; Called Functions:
;   core_dcamera.cpp_FUN_0043c6b0
;   core_dcamera.cpp_FUN_0043c780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441ea0
        ;   Label: core_dcamera.cpp_FUN_00441ea0
    PUSH EDI                            ; 00441ea1
    SUB ESP,0x40                        ; 00441ea2
    MOV EBX,ESI                         ; 00441ea5
    MOV EDX,dword ptr [ESP + 0x54]      ; 00441ea7
    PUSH EDX                            ; 00441eab
    MOV ECX,dword ptr [ESP + 0x54]      ; 00441eac
    PUSH ECX                            ; 00441eb0
    MOV ESI,dword ptr [ESP + 0x54]      ; 00441eb1
    PUSH ESI                            ; 00441eb5
    LEA ESI,[ESP + 0x18]                ; 00441eb6
    LEA EDI,[ESP + 0x30]                ; 00441eba
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 00441ebe
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x18]                ; 00441ec3
    ADD ESP,0xc                         ; 00441ec7
    LEA EAX,[ESP + 0x24]                ; 00441eca
    MOVSD ES:EDI,ESI                    ; 00441ece
    MOVSD ES:EDI,ESI                    ; 00441ecf
    MOVSD ES:EDI,ESI                    ; 00441ed0
    PUSH EAX                            ; 00441ed1
    MOV EDI,dword ptr [ESP + 0x50]      ; 00441ed2
    PUSH EDI                            ; 00441ed6
    LEA ESI,[ESP + 0x8]                 ; 00441ed7
    CALL core_dcamera.cpp_FUN_0043c780  ; 00441edb
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA EDI,[ESP + 0x38]                ; 00441ee0
    LEA ESI,[ESP + 0x8]                 ; 00441ee4
    ADD ESP,0x8                         ; 00441ee8
    MOVSD ES:EDI,ESI                    ; 00441eeb
    MOVSD ES:EDI,ESI                    ; 00441eec
    MOVSD ES:EDI,ESI                    ; 00441eed
    MOV EAX,dword ptr [ESP + 0x30]      ; 00441eee
    MOV dword ptr [ESP + 0x3c],EAX      ; 00441ef2
    FILD dword ptr [ESP + 0x3c]         ; 00441ef6
    MOV EAX,dword ptr [ESP + 0x34]      ; 00441efa
    FLD double ptr [0x005ce63e]         ; 00441efe | DAT_005ce63e
    FXCH                                ; 00441f04
    FMUL ST1                            ; 00441f06
    MOV dword ptr [ESP + 0x3c],EAX      ; 00441f08
    MOV EAX,dword ptr [ESP + 0x38]      ; 00441f0c
    FILD dword ptr [ESP + 0x3c]         ; 00441f10
    MOV dword ptr [ESP + 0x3c],EAX      ; 00441f14
    FMUL ST2                            ; 00441f18
    FILD dword ptr [ESP + 0x3c]         ; 00441f1a
    FMULP ST3                           ; 00441f1e
    LEA ESI,[ESP + 0x18]                ; 00441f20
    MOV EDI,EBX                         ; 00441f24
    FXCH                                ; 00441f26
    FSTP float ptr [ESP + 0x18]         ; 00441f28
    FSTP float ptr [ESP + 0x1c]         ; 00441f2c
    FSTP float ptr [ESP + 0x20]         ; 00441f30
    MOVSD ES:EDI,ESI                    ; 00441f34
    MOVSD ES:EDI,ESI                    ; 00441f35
    MOVSD ES:EDI,ESI                    ; 00441f36
    MOV EAX,EBX                         ; 00441f37
    ADD ESP,0x40                        ; 00441f39
    POP EDI                             ; 00441f3c
    POP EBX                             ; 00441f3d
    RET                                 ; 00441f3e

