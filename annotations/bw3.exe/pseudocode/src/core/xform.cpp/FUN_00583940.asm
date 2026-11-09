; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00583940(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[31]:
;   core_asgaya.cpp_FUN_005a1970 at 005a1a4f
;   core_baal.cpp_FUN_00597810 at 005978ef
;   core_bodypart.cpp_FUN_00415e30 at 0041627f
;   core_boneguy.cpp_FUN_004186b0 at 0041870c
;   core_boxactor.cpp_FUN_00420420 at 004205c2
;   core_bugs.cpp_FUN_00422570 at 00422662
;   core_carved.cpp_FUN_00427780 at 00427817
;   core_charactr.cpp_FUN_0042b450 at 0042b7dd
;   core_charactr.cpp_FUN_0042f770 at 0042f9ce
;   core_charactr.cpp_FUN_00431ab0 at 00431b14
;   ... and 21 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583940
        ;   Label: core_xform.cpp_FUN_00583940
    PUSH ESI                            ; 00583941
    PUSH EDI                            ; 00583942
    SUB ESP,0x18                        ; 00583943
    MOV EBX,dword ptr [ESP + 0x28]      ; 00583946
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0058394a
    MOV ESI,dword ptr [ESP + 0x30]      ; 0058394e
    PUSH ESI                            ; 00583952
    LEA EAX,[ESP + 0x8]                 ; 00583953
    PUSH EAX                            ; 00583957
    LEA EAX,[ESP + 0x8]                 ; 00583958
    PUSH EAX                            ; 0058395c
    CALL core_dirmat.cpp_FUN_0045bef0   ; 0058395d
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00583962
    LEA EAX,[ESI + 0x8]                 ; 00583965
    PUSH EAX                            ; 00583968
    LEA EAX,[ESP + 0x14]                ; 00583969
    PUSH EAX                            ; 0058396d
    LEA EAX,[ESP + 0x10]                ; 0058396e
    PUSH EAX                            ; 00583972
    CALL core_dirmat.cpp_FUN_0045bef0   ; 00583973
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 00583978
    ADD ESI,0x4                         ; 0058397b
    PUSH ESI                            ; 0058397e
    LEA EAX,[ESP + 0x10]                ; 0058397f
    PUSH EAX                            ; 00583983
    LEA EAX,[ESP + 0x1c]                ; 00583984
    PUSH EAX                            ; 00583988
    CALL core_dirmat.cpp_FUN_0045bef0   ; 00583989
        ;   XREF to: 0045bef0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045bef0()
    ADD ESP,0xc                         ; 0058398e
    FLD float ptr [ESP + 0x14]          ; 00583991
    FMUL float ptr [ESP]                ; 00583995
    FMUL float ptr [ESP + 0x8]          ; 00583998
    FLD float ptr [ESP + 0xc]           ; 0058399c
    FMUL float ptr [ESP + 0x10]         ; 005839a0
    FADDP                               ; 005839a4
    FSTP float ptr [EBX]                ; 005839a6
    FLD float ptr [ESP + 0x14]          ; 005839a8
    FMUL float ptr [ESP]                ; 005839ac
    FMUL float ptr [ESP + 0x10]         ; 005839af
    FLD float ptr [ESP + 0xc]           ; 005839b3
    FCHS                                ; 005839b7
    FMUL float ptr [ESP + 0x8]          ; 005839b9
    FADDP                               ; 005839bd
    FSTP float ptr [EBX + 0x4]          ; 005839bf
    FLD float ptr [ESP + 0x14]          ; 005839c2
    FMUL float ptr [ESP + 0x4]          ; 005839c6
    FSTP float ptr [EBX + 0x8]          ; 005839ca
    FLD float ptr [ESP + 0x8]           ; 005839cd
    FMUL float ptr [ESP + 0x4]          ; 005839d1
    FSTP float ptr [EBX + 0x10]         ; 005839d5
    FLD float ptr [ESP + 0x10]          ; 005839d8
    FMUL float ptr [ESP + 0x4]          ; 005839dc
    FSTP float ptr [EBX + 0x14]         ; 005839e0
    FLD float ptr [ESP]                 ; 005839e3
    FCHS                                ; 005839e6
    FSTP float ptr [EBX + 0x18]         ; 005839e8
    FLD float ptr [ESP + 0xc]           ; 005839eb
    FMUL float ptr [ESP]                ; 005839ef
    FMUL float ptr [ESP + 0x8]          ; 005839f2
    FLD float ptr [ESP + 0x14]          ; 005839f6
    FCHS                                ; 005839fa
    FMUL float ptr [ESP + 0x10]         ; 005839fc
    FADDP                               ; 00583a00
    FSTP float ptr [EBX + 0x20]         ; 00583a02
    FLD float ptr [ESP + 0xc]           ; 00583a05
    FMUL float ptr [ESP]                ; 00583a09
    FMUL float ptr [ESP + 0x10]         ; 00583a0c
    FLD float ptr [ESP + 0x8]           ; 00583a10
    FMUL float ptr [ESP + 0x14]         ; 00583a14
    FADDP                               ; 00583a18
    FSTP float ptr [EBX + 0x24]         ; 00583a1a
    FLD float ptr [ESP + 0xc]           ; 00583a1d
    FMUL float ptr [ESP + 0x4]          ; 00583a21
    FSTP float ptr [EBX + 0x28]         ; 00583a25
    MOV EAX,dword ptr [EDI]             ; 00583a28
    MOV dword ptr [EBX + 0xc],EAX       ; 00583a2a
    MOV EAX,dword ptr [EDI + 0x4]       ; 00583a2d
    MOV dword ptr [EBX + 0x1c],EAX      ; 00583a30
    MOV EAX,dword ptr [EDI + 0x8]       ; 00583a33
    MOV dword ptr [EBX + 0x2c],EAX      ; 00583a36
    ADD ESP,0x18                        ; 00583a39
    POP EDI                             ; 00583a3c
    POP ESI                             ; 00583a3d
    POP EBX                             ; 00583a3e
    RET                                 ; 00583a3f

