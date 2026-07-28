; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined8       Stack[-0x38]:8  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_gargoyle.cpp_CGargoyle_process_FUN_004a7870 at 004a7c66
;
; Referenced Globals:
;   double DOUBLE_00584980 = -0.314159265350000
;   double DOUBLE_00584988 = 0.314159265350000
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7710
        ;   Label: core_gargoyle.cpp_CGargoyle_shouldMove_FUN_004a7710
    PUSH EBP                            ; 004a7711
    MOV EBP,ESP                         ; 004a7712
    SUB ESP,0x30                        ; 004a7714
    AND ESP,0xfffffff8                  ; 004a7717
    MOV EBX,dword ptr [EBP + 0xc]       ; 004a771a
    MOV EDX,dword ptr [EBX + 0xbca4]    ; 004a771d
    MOV dword ptr [EBX + 0xbd78],0x0    ; 004a7723
    TEST EDX,EDX                        ; 004a772d
    JZ 0x004a77c0                       ; 004a772f
        ;   XREF to: 004a77c0 (CONDITIONAL_JUMP)  ; LAB_004a77c0
    MOV EAX,EDX                         ; 004a7735
    LEA EDX,[EBX + 0x20]                ; 004a7737
    FLD float ptr [EDX]                 ; 004a773a
    FSUB float ptr [EAX + 0x20]         ; 004a773c
    FSTP float ptr [ESP + 0x14]         ; 004a773f
    FLD float ptr [EDX + 0x4]           ; 004a7743
    FSUB float ptr [EAX + 0x24]         ; 004a7746
    FST float ptr [ESP + 0x18]          ; 004a7749
    FMUL float ptr [ESP + 0x18]         ; 004a774d
    FLD float ptr [ESP + 0x14]          ; 004a7751
    FMUL ST0                            ; 004a7755
    FLD float ptr [EDX + 0x8]           ; 004a7757
    FSUB float ptr [EAX + 0x28]         ; 004a775a
    FXCH                                ; 004a775d
    FADDP ST2,ST0                       ; 004a775f
    FST float ptr [ESP + 0x1c]          ; 004a7761
    FMUL float ptr [ESP + 0x1c]         ; 004a7765
    FADDP                               ; 004a7769
    FSQRT                               ; 004a776b
    FCOMP float ptr [EBX + 0xbc9c]      ; 004a776d
    FNSTSW AX                           ; 004a7773
    SAHF                                ; 004a7775
    JBE 0x004a77db                      ; 004a7776
        ;   XREF to: 004a77db (CONDITIONAL_JUMP)  ; LAB_004a77db
    MOV ECX,dword ptr [EBX + 0xbd60]    ; 004a7778
    TEST ECX,ECX                        ; 004a777e
    JZ 0x004a77c0                       ; 004a7780
        ;   XREF to: 004a77c0 (CONDITIONAL_JUMP)  ; LAB_004a77c0
    MOV EAX,ECX                         ; 004a7782
    FLD float ptr [EAX + 0x20]          ; 004a7784
    FSUB float ptr [EDX]                ; 004a7787
    FSTP float ptr [ESP + 0x8]          ; 004a7789
    FLD float ptr [EAX + 0x24]          ; 004a778d
    FSUB float ptr [EDX + 0x4]          ; 004a7790
    FST float ptr [ESP + 0xc]           ; 004a7793
    FMUL float ptr [ESP + 0xc]          ; 004a7797
    FLD float ptr [ESP + 0x8]           ; 004a779b
    FMUL ST0                            ; 004a779f
    FLD float ptr [EAX + 0x28]          ; 004a77a1
    FSUB float ptr [EDX + 0x8]          ; 004a77a4
    FXCH                                ; 004a77a7
    FADDP ST2,ST0                       ; 004a77a9
    FST float ptr [ESP + 0x10]          ; 004a77ab
    FMUL float ptr [ESP + 0x10]         ; 004a77af
    FADDP                               ; 004a77b3
    FSQRT                               ; 004a77b5
    FLD1                                ; 004a77b7
    FCOMPP                              ; 004a77b9
    FNSTSW AX                           ; 004a77bb
    SAHF                                ; 004a77bd
    JBE 0x004a77c7                      ; 004a77be
        ;   XREF to: 004a77c7 (CONDITIONAL_JUMP)  ; LAB_004a77c7
    XOR EAX,EAX                         ; 004a77c0
        ;   Label: LAB_004a77c0
    MOV ESP,EBP                         ; 004a77c2
    POP EBP                             ; 004a77c4
    POP EBX                             ; 004a77c5
    RET                                 ; 004a77c6
    MOV EAX,0x1                         ; 004a77c7
        ;   Label: LAB_004a77c7
    MOV dword ptr [EBX + 0xbd78],0x1    ; 004a77cc
    MOV ESP,EBP                         ; 004a77d6
    POP EBP                             ; 004a77d8
    POP EBX                             ; 004a77d9
    RET                                 ; 004a77da
    LEA EAX,[ESP + 0x14]                ; 004a77db
        ;   Label: LAB_004a77db
    PUSH EAX                            ; 004a77df
    LEA EAX,[ESP + 0x24]                ; 004a77e0
    PUSH EAX                            ; 004a77e4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004a77e5
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 004a77ea
    LEA EAX,[ESP + 0x1c]                ; 004a77ec
    ADD ESP,0x8                         ; 004a77f0
    CMP EAX,EDX                         ; 004a77f3
    JZ 0x004a780b                       ; 004a77f5
        ;   XREF to: 004a780b (CONDITIONAL_JUMP)  ; LAB_004a780b
    MOV EAX,dword ptr [EDX]             ; 004a77f7
    MOV dword ptr [ESP + 0x14],EAX      ; 004a77f9
    MOV EAX,dword ptr [EDX + 0x4]       ; 004a77fd
    MOV dword ptr [ESP + 0x18],EAX      ; 004a7800
    MOV EAX,dword ptr [EDX + 0x8]       ; 004a7804
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a7807
    MOV EAX,dword ptr [EBX + 0xbca4]    ; 004a780b
        ;   Label: LAB_004a780b
    FLD float ptr [EAX + 0x34]          ; 004a7811
    FSUB float ptr [ESP + 0x18]         ; 004a7814
    SUB ESP,0x4                         ; 004a7818
    FSTP float ptr [ESP]                ; 004a781b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004a781e
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x30],EAX      ; 004a7823
    FLD float ptr [ESP + 0x30]          ; 004a7827
    ADD ESP,0x4                         ; 004a782b
    FST double ptr [ESP]                ; 004a782e
    FCOMP double ptr [0x00584980]       ; 004a7831 | DOUBLE_00584980
    FNSTSW AX                           ; 004a7837
    SAHF                                ; 004a7839
    JC 0x004a784e                       ; 004a783a
        ;   XREF to: 004a784e (CONDITIONAL_JUMP)  ; LAB_004a784e
    FLD double ptr [ESP]                ; 004a783c
    FCOMP double ptr [0x00584988]       ; 004a783f | DOUBLE_00584988
    FNSTSW AX                           ; 004a7845
    SAHF                                ; 004a7847
    JBE 0x004a77c0                      ; 004a7848
        ;   XREF to: 004a77c0 (CONDITIONAL_JUMP)  ; LAB_004a77c0
    MOV EAX,0x1                         ; 004a784e
        ;   Label: LAB_004a784e
    MOV ESP,EBP                         ; 004a7853
    POP EBP                             ; 004a7855
    POP EBX                             ; 004a7856
    RET                                 ; 004a7857

