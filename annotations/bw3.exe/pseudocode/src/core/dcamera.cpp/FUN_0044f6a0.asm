; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044f6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9f6e
;
; Called Functions:
;   core_dcamera.cpp_FUN_00449eb0
;   core_dcamera.cpp_FUN_00449f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f6a0
        ;   Label: core_dcamera.cpp_FUN_0044f6a0
    PUSH EDI                            ; 0044f6a1
    SUB ESP,0x40                        ; 0044f6a2
    MOV EBX,ESI                         ; 0044f6a5
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044f6a7
    PUSH EDX                            ; 0044f6ab
    MOV ECX,dword ptr [ESP + 0x54]      ; 0044f6ac
    PUSH ECX                            ; 0044f6b0
    MOV ESI,dword ptr [ESP + 0x54]      ; 0044f6b1
    PUSH ESI                            ; 0044f6b5
    LEA ESI,[ESP + 0x18]                ; 0044f6b6
    LEA EDI,[ESP + 0x30]                ; 0044f6ba
    CALL core_dcamera.cpp_FUN_00449eb0  ; 0044f6be
        ;   XREF to: 00449eb0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449eb0()
    LEA ESI,[ESP + 0x18]                ; 0044f6c3
    ADD ESP,0xc                         ; 0044f6c7
    LEA EAX,[ESP + 0x24]                ; 0044f6ca
    MOVSD ES:EDI,ESI                    ; 0044f6ce
    MOVSD ES:EDI,ESI                    ; 0044f6cf
    MOVSD ES:EDI,ESI                    ; 0044f6d0
    PUSH EAX                            ; 0044f6d1
    MOV EDI,dword ptr [ESP + 0x50]      ; 0044f6d2
    PUSH EDI                            ; 0044f6d6
    LEA ESI,[ESP + 0x8]                 ; 0044f6d7
    CALL core_dcamera.cpp_FUN_00449f80  ; 0044f6db
        ;   XREF to: 00449f80 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_00449f80()
    LEA EDI,[ESP + 0x38]                ; 0044f6e0
    LEA ESI,[ESP + 0x8]                 ; 0044f6e4
    ADD ESP,0x8                         ; 0044f6e8
    MOVSD ES:EDI,ESI                    ; 0044f6eb
    MOVSD ES:EDI,ESI                    ; 0044f6ec
    MOVSD ES:EDI,ESI                    ; 0044f6ed
    MOV EAX,dword ptr [ESP + 0x30]      ; 0044f6ee
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044f6f2
    FILD dword ptr [ESP + 0x3c]         ; 0044f6f6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0044f6fa
    FLD double ptr [0x005b9f6e]         ; 0044f6fe | DAT_005b9f6e
    FXCH                                ; 0044f704
    FMUL ST1                            ; 0044f706
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044f708
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044f70c
    FILD dword ptr [ESP + 0x3c]         ; 0044f710
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044f714
    FMUL ST2                            ; 0044f718
    FILD dword ptr [ESP + 0x3c]         ; 0044f71a
    FMULP ST3                           ; 0044f71e
    LEA ESI,[ESP + 0x18]                ; 0044f720
    MOV EDI,EBX                         ; 0044f724
    FXCH                                ; 0044f726
    FSTP float ptr [ESP + 0x18]         ; 0044f728
    FSTP float ptr [ESP + 0x1c]         ; 0044f72c
    FSTP float ptr [ESP + 0x20]         ; 0044f730
    MOVSD ES:EDI,ESI                    ; 0044f734
    MOVSD ES:EDI,ESI                    ; 0044f735
    MOVSD ES:EDI,ESI                    ; 0044f736
    MOV EAX,EBX                         ; 0044f737
    ADD ESP,0x40                        ; 0044f739
    POP EDI                             ; 0044f73c
    POP EBX                             ; 0044f73d
    RET                                 ; 0044f73e

