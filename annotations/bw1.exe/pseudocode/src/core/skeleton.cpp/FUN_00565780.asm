; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00565780(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[21]:
;   FUN_00411280 at 0041142d
;   FUN_00412840 at 004129ec
;   FUN_00423940 at 00423a68
;   FUN_004287e0 at 00428934
;   FUN_0042e580 at 0042e74e
;   FUN_004459c0 at 00445b5a
;   FUN_00448410 at 00448479
;   FUN_00458bc0 at 00458d19
;   FUN_0045ff00 at 00460102
;   FUN_0047b1b0 at 0047b31a
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f221f
;   TerminatedCString s_Can_t_find_part_s_in_mod_005f2234
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565780
        ;   Label: FUN_00565780
    PUSH ESI                            ; 00565781
    PUSH EDI                            ; 00565782
    PUSH EBP                            ; 00565783
    MOV EDI,dword ptr [ESP + 0x14]      ; 00565784
    MOV EBP,dword ptr [ESP + 0x18]      ; 00565788
    MOV EDX,dword ptr [EDI + 0xc00]     ; 0056578c
    XOR EBX,EBX                         ; 00565792
    TEST EDX,EDX                        ; 00565794
    JLE 0x005657ba                      ; 00565796
        ;   XREF to: 005657ba (CONDITIONAL_JUMP)  ; LAB_005657ba
    LEA ESI,[EDI + 0xc04]               ; 00565798
    PUSH ESI                            ; 0056579e
        ;   Label: LAB_0056579e
    PUSH EBP                            ; 0056579f
    CALL FUN_005c04e0                   ; 005657a0
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005657a5
    TEST EAX,EAX                        ; 005657a8
    JZ 0x005657cb                       ; 005657aa
        ;   XREF to: 005657cb (CONDITIONAL_JUMP)  ; LAB_005657cb
    INC EBX                             ; 005657ac
    MOV ECX,dword ptr [EDI + 0xc00]     ; 005657ad
    ADD ESI,0x60                        ; 005657b3
    CMP EBX,ECX                         ; 005657b6
    JL 0x0056579e                       ; 005657b8
        ;   XREF to: 0056579e (CONDITIONAL_JUMP)  ; LAB_0056579e
    CMP dword ptr [ESP + 0x1c],0x0      ; 005657ba
        ;   Label: LAB_005657ba
    JNZ 0x005657d2                      ; 005657bf
        ;   XREF to: 005657d2 (CONDITIONAL_JUMP)  ; LAB_005657d2
    MOV EAX,0xffffffff                  ; 005657c1
    POP EBP                             ; 005657c6
    POP EDI                             ; 005657c7
    POP ESI                             ; 005657c8
    POP EBX                             ; 005657c9
    RET                                 ; 005657ca
    MOV EAX,EBX                         ; 005657cb
        ;   Label: LAB_005657cb
    POP EBP                             ; 005657cd
    POP EDI                             ; 005657ce
    POP ESI                             ; 005657cf
    POP EBX                             ; 005657d0
    RET                                 ; 005657d1
    ADD EDI,0x35b0                      ; 005657d2
        ;   Label: LAB_005657d2
    PUSH EDI                            ; 005657d8
    PUSH EBP                            ; 005657d9
    MOV ESI,0x5f221f                    ; 005657da | = "..\\core\\skeleton.cpp"
    MOV EAX,0x5e1                       ; 005657df
    PUSH 0x5f2234                       ; 005657e4 | = "Can't find part %s in model %s"
    MOV dword ptr [0x01d1d400],ESI      ; 005657e9 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 005657ef | DAT_01d1d404
    CALL FUN_005030e0                   ; 005657f4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 005657f9
    MOV EAX,0xffffffff                  ; 005657fc
    POP EBP                             ; 00565801
    POP EDI                             ; 00565802
    POP ESI                             ; 00565803
    POP EBX                             ; 00565804
    RET                                 ; 00565805

