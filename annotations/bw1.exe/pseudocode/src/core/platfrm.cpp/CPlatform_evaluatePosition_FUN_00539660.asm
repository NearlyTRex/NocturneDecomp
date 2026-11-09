; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00539660(CPlatform *this_ptr)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_setup_FUN_005395d0 at 005395eb
;   core_platfrm.cpp_FUN_00539810 at 00539a2d
;
; Called Functions:
;   core_course.cpp_FUN_00447f00
;   core_xform.cpp_FUN_005b7940
;   core_xform.cpp_FUN_005b7c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00539660
        ;   Label: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00539660
    PUSH ESI                            ; 00539661
    PUSH EDI                            ; 00539662
    PUSH EBP                            ; 00539663
    MOV EBP,ESP                         ; 00539664
    SUB ESP,0x88                        ; 00539666
    SUB EBP,0x7e                        ; 0053966c
    MOV EDX,dword ptr [EBP + 0x92]      ; 0053966f
    FLD float ptr [EDX + 0x2dc]         ; 00539675
    FLDZ                                ; 0053967b
    FCOMPP                              ; 0053967d
    FNSTSW AX                           ; 0053967f
    SAHF                                ; 00539681
    JA 0x005397ac                       ; 00539682
        ;   XREF to: 005397ac (CONDITIONAL_JUMP)  ; LAB_005397ac
    FLD float ptr [EDX + 0x2dc]         ; 00539688
        ;   Label: LAB_00539688
    FLD1                                ; 0053968e
    FCOMPP                              ; 00539690
    FNSTSW AX                           ; 00539692
    SAHF                                ; 00539694
    JNC 0x005396a1                      ; 00539695
        ;   XREF to: 005396a1 (CONDITIONAL_JUMP)  ; LAB_005396a1
    MOV dword ptr [EDX + 0x2dc],0x3f800000 ; 00539697
    LEA ECX,[EDX + 0x20]                ; 005396a1
        ;   Label: LAB_005396a1
    MOV AH,byte ptr [EDX + 0x2f0]       ; 005396a4
    LEA EBX,[EDX + 0x30]                ; 005396aa
    TEST AH,AH                          ; 005396ad
    JNZ 0x005397bb                      ; 005396af
        ;   XREF to: 005397bb (CONDITIONAL_JUMP)  ; LAB_005397bb
    LEA EAX,[EDX + 0x328]               ; 005396b5
    LEA ESI,[EDX + 0x2dc]               ; 005396bb
    FLD float ptr [EAX]                 ; 005396c1
    FMUL float ptr [ESI]                ; 005396c3
    FLD float ptr [EAX + 0x4]           ; 005396c5
    FMUL float ptr [ESI]                ; 005396c8
    FLD float ptr [EAX + 0x8]           ; 005396ca
    FMUL float ptr [ESI]                ; 005396cd
    LEA EDI,[EBP + 0x5e]                ; 005396cf
    FXCH ST2                            ; 005396d2
    FSTP float ptr [EBP + 0x22]         ; 005396d4
    FSTP float ptr [EBP + 0x26]         ; 005396d7
    LEA ESI,[EBP + 0x22]                ; 005396da
    FSTP float ptr [EBP + 0x2a]         ; 005396dd
    MOVSD ES:EDI,ESI                    ; 005396e0
    MOVSD ES:EDI,ESI                    ; 005396e1
    MOVSD ES:EDI,ESI                    ; 005396e2
    LEA EAX,[EDX + 0x31c]               ; 005396e3
    FLD float ptr [EDX + 0x2dc]         ; 005396e9
    FLD1                                ; 005396ef
    FSUBRP                              ; 005396f1
    FLD float ptr [EAX]                 ; 005396f3
    FXCH                                ; 005396f5
    FSTP float ptr [EBP + 0x76]         ; 005396f7
    FMUL float ptr [EBP + 0x76]         ; 005396fa
    FLD float ptr [EAX + 0x4]           ; 005396fd
    FMUL float ptr [EBP + 0x76]         ; 00539700
    FLD float ptr [EAX + 0x8]           ; 00539703
    FMUL float ptr [EBP + 0x76]         ; 00539706
    LEA EDI,[EBP + 0x6a]                ; 00539709
    LEA ESI,[EBP + 0x46]                ; 0053970c
    FXCH ST2                            ; 0053970f
    FSTP float ptr [EBP + 0x46]         ; 00539711
    FSTP float ptr [EBP + 0x4a]         ; 00539714
    FSTP float ptr [EBP + 0x4e]         ; 00539717
    MOVSD ES:EDI,ESI                    ; 0053971a
    MOVSD ES:EDI,ESI                    ; 0053971b
    MOVSD ES:EDI,ESI                    ; 0053971c
    FLD float ptr [EBP + 0x6a]          ; 0053971d
    FLD float ptr [EBP + 0x6e]          ; 00539720
    FLD float ptr [EBP + 0x72]          ; 00539723
    LEA EDI,[EBP + 0x3a]                ; 00539726
    LEA ESI,[EBP + 0x2e]                ; 00539729
    FXCH ST2                            ; 0053972c
    FADD float ptr [EBP + 0x5e]         ; 0053972e
    FXCH                                ; 00539731
    FADD float ptr [EBP + 0x62]         ; 00539733
    FXCH ST2                            ; 00539736
    FADD float ptr [EBP + 0x66]         ; 00539738
    FXCH                                ; 0053973b
    FSTP float ptr [EBP + 0x2e]         ; 0053973d
    FXCH                                ; 00539740
    FSTP float ptr [EBP + 0x32]         ; 00539742
    FSTP float ptr [EBP + 0x36]         ; 00539745
    MOVSD ES:EDI,ESI                    ; 00539748
    MOVSD ES:EDI,ESI                    ; 00539749
    MOVSD ES:EDI,ESI                    ; 0053974a
    MOV EAX,dword ptr [EBP + 0x3a]      ; 0053974b
    MOV dword ptr [ECX],EAX             ; 0053974e
    MOV EAX,dword ptr [EBP + 0x3e]      ; 00539750
    MOV dword ptr [ECX + 0x4],EAX       ; 00539753
    MOV EAX,dword ptr [EBP + 0x42]      ; 00539756
    MOV dword ptr [ECX + 0x8],EAX       ; 00539759
    LEA EAX,[EDX + 0x344]               ; 0053975c
    PUSH dword ptr [EDX + 0x2dc]        ; 00539762
    PUSH EAX                            ; 00539768
    ADD EDX,0x334                       ; 00539769
    PUSH EDX                            ; 0053976f
    LEA ESI,[EBP + 0x6]                 ; 00539770
    LEA EDI,[EBP + -0xa]                ; 00539773
    CALL core_xform.cpp_FUN_005b7940    ; 00539776
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7940()
    LEA ESI,[EBP + 0x6]                 ; 0053977b
    LEA EAX,[EBP + -0xa]                ; 0053977e
    ADD ESP,0xc                         ; 00539781
    MOVSD ES:EDI,ESI                    ; 00539784
    MOVSD ES:EDI,ESI                    ; 00539785
    MOVSD ES:EDI,ESI                    ; 00539786
    MOVSD ES:EDI,ESI                    ; 00539787
    PUSH EAX                            ; 00539788
    LEA ESI,[EBP + 0x52]                ; 00539789
    LEA EDI,[EBP + 0x16]                ; 0053978c
    CALL core_xform.cpp_FUN_005b7c00    ; 0053978f
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b7c00()
    LEA ESI,[EBP + 0x52]                ; 00539794
    LEA EAX,[EBP + 0x16]                ; 00539797
    ADD ESP,0x4                         ; 0053979a
    MOVSD ES:EDI,ESI                    ; 0053979d
    MOVSD ES:EDI,ESI                    ; 0053979e
    MOVSD ES:EDI,ESI                    ; 0053979f
    CMP EBX,EAX                         ; 005397a0
    JNZ 0x005397e2                      ; 005397a2
        ;   XREF to: 005397e2 (CONDITIONAL_JUMP)  ; LAB_005397e2
    LEA ESP,[EBP + 0x7e]                ; 005397a4
        ;   Label: LAB_005397a4
    POP EBP                             ; 005397a7
    POP EDI                             ; 005397a8
    POP ESI                             ; 005397a9
    POP EBX                             ; 005397aa
    RET                                 ; 005397ab
    MOV dword ptr [EDX + 0x2dc],0x0     ; 005397ac
        ;   Label: LAB_005397ac
    JMP 0x00539688                      ; 005397b6
        ;   XREF to: 00539688 (UNCONDITIONAL_JUMP)  ; LAB_00539688
    PUSH EBX                            ; 005397bb
        ;   Label: LAB_005397bb
    LEA EAX,[EDX + 0x310]               ; 005397bc
    PUSH ECX                            ; 005397c2
    MOV ECX,dword ptr [EAX]             ; 005397c3
    MOV dword ptr [EBP + 0x7a],ECX      ; 005397c5
    FILD dword ptr [EBP + 0x7a]         ; 005397c8
    FMUL float ptr [EDX + 0x2dc]        ; 005397cb
    SUB ESP,0x4                         ; 005397d1
    FSTP float ptr [ESP]                ; 005397d4
    PUSH EAX                            ; 005397d7
    CALL core_course.cpp_FUN_00447f00   ; 005397d8
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 005397dd
    JMP 0x005397a4                      ; 005397e0
        ;   XREF to: 005397a4 (UNCONDITIONAL_JUMP)  ; LAB_005397a4
    MOV EAX,dword ptr [EBP + 0x16]      ; 005397e2
        ;   Label: LAB_005397e2
    MOV dword ptr [EBX],EAX             ; 005397e5
    MOV EAX,dword ptr [EBP + 0x1a]      ; 005397e7
    MOV dword ptr [EBX + 0x4],EAX       ; 005397ea
    MOV EAX,dword ptr [EBP + 0x1e]      ; 005397ed
    MOV dword ptr [EBX + 0x8],EAX       ; 005397f0
    LEA ESP,[EBP + 0x7e]                ; 005397f3
    POP EBP                             ; 005397f6
    POP EDI                             ; 005397f7
    POP ESI                             ; 005397f8
    POP EBX                             ; 005397f9
    RET                                 ; 005397fa

