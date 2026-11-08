; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005197b0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
;
; XREF[1]:
;   FUN_005184c0 at 00518dd7
;
; Referenced Globals:
;   undefined4 DAT_005e23c0
;   undefined4 DAT_005e23c8
;
; Called Functions:
;   FUN_00408de0
;   FUN_0040d0c0
;   FUN_0044f020
;   FUN_0044fd20
;   FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005197b0
        ;   Label: FUN_005197b0
    PUSH ESI                            ; 005197b1
    PUSH EDI                            ; 005197b2
    PUSH EBP                            ; 005197b3
    MOV EBP,ESP                         ; 005197b4
    SUB ESP,0xa0                        ; 005197b6
    AND ESP,0xfffffff8                  ; 005197bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005197bf
    CMP dword ptr [EBP + 0x18],0x0      ; 005197c2
    JNZ 0x005197d1                      ; 005197c6
        ;   XREF to: 005197d1 (CONDITIONAL_JUMP)  ; LAB_005197d1
    XOR EAX,EAX                         ; 005197c8
        ;   Label: LAB_005197c8
    MOV ESP,EBP                         ; 005197ca
    POP EBP                             ; 005197cc
    POP EDI                             ; 005197cd
    POP ESI                             ; 005197ce
    POP EBX                             ; 005197cf
    RET                                 ; 005197d0
    LEA EAX,[ESP + 0x8]                 ; 005197d1
        ;   Label: LAB_005197d1
    PUSH EAX                            ; 005197d5
    CALL FUN_00537fa0                   ; 005197d6
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537fa0()
    LEA EAX,[ESP + 0xc]                 ; 005197db
    ADD ESP,0x4                         ; 005197df
    XOR ECX,ECX                         ; 005197e2
    MOV ESI,dword ptr [EBP + 0x18]      ; 005197e4
    PUSH EAX                            ; 005197e7
    MOV EDI,dword ptr [EBP + 0x18]      ; 005197e8
    MOV dword ptr [ESP + 0xc],ECX       ; 005197eb
    PUSH EDI                            ; 005197ef
    MOV ESI,dword ptr [ESI + 0x2b0]     ; 005197f0
    CALL dword ptr [ESI + 0x44]         ; 005197f6
    ADD ESP,0x8                         ; 005197f9
    CMP EAX,0x2                         ; 005197fc
    JNZ 0x005197c8                      ; 005197ff
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    PUSH dword ptr [EBX + 0x30]         ; 00519801
    CALL FUN_0040d0c0                   ; 00519804
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa0],EAX      ; 00519809
    FLD float ptr [ESP + 0xa0]          ; 00519810
    ADD ESP,0x4                         ; 00519817
    PUSH dword ptr [EBX + 0x38]         ; 0051981a
    FSTP float ptr [EBX + 0x30]         ; 0051981d
    CALL FUN_0040d0c0                   ; 00519820
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    FLD float ptr [EBX + 0x30]          ; 00519825
    MOV dword ptr [ESP + 0xa0],EAX      ; 00519828
    FABS                                ; 0051982f
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00519831
    MOV dword ptr [EBX + 0x38],EAX      ; 00519838
    ADD ESP,0x4                         ; 0051983b
    FCOMP double ptr [0x005e23c0]       ; 0051983e | DAT_005e23c0
    FNSTSW AX                           ; 00519844
    SAHF                                ; 00519846
    JA 0x005197c8                       ; 00519847
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [EBX + 0x38]          ; 0051984d
    FABS                                ; 00519850
    FCOMP double ptr [0x005e23c0]       ; 00519852 | DAT_005e23c0
    FNSTSW AX                           ; 00519858
    SAHF                                ; 0051985a
    JA 0x005197c8                       ; 0051985b
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    PUSH EBX                            ; 00519861
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00519862
    LEA ESI,[ESP + 0x34]                ; 00519868
    CALL dword ptr [EAX + 0x24]         ; 0051986c
    ADD ESP,0x4                         ; 0051986f
    LEA EDI,[ESP + 0x48]                ; 00519872
    MOV EAX,dword ptr [EBP + 0x18]      ; 00519876
    MOV ECX,0x6                         ; 00519879
    ADD EAX,0x20                        ; 0051987e
    LEA ESI,[ESP + 0x30]                ; 00519881
    PUSH EAX                            ; 00519885
    MOVSD.REP ES:EDI,ESI                ; 00519886
    PUSH EBX                            ; 00519888
    LEA ESI,[ESP + 0x68]                ; 00519889
    LEA EDI,[ESP + 0x98]                ; 0051988d
    CALL FUN_00408de0                   ; 00519894
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x68]                ; 00519899
    ADD ESP,0x8                         ; 0051989d
    MOVSD ES:EDI,ESI                    ; 005198a0
    MOVSD ES:EDI,ESI                    ; 005198a1
    MOVSD ES:EDI,ESI                    ; 005198a2
    FLD float ptr [ESP + 0x90]          ; 005198a3
    FADD float ptr [ESP + 0x24]         ; 005198aa
    FCOMP float ptr [ESP + 0x48]        ; 005198ae
    FNSTSW AX                           ; 005198b2
    SAHF                                ; 005198b4
    JC 0x005197c8                       ; 005198b5
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [ESP + 0x90]          ; 005198bb
    FSUB float ptr [ESP + 0x24]         ; 005198c2
    FCOMP float ptr [ESP + 0x54]        ; 005198c6
    FNSTSW AX                           ; 005198ca
    SAHF                                ; 005198cc
    JA 0x005197c8                       ; 005198cd
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [ESP + 0x98]          ; 005198d3
    FADD float ptr [ESP + 0x24]         ; 005198da
    FCOMP float ptr [ESP + 0x50]        ; 005198de
    FNSTSW AX                           ; 005198e2
    SAHF                                ; 005198e4
    JC 0x005197c8                       ; 005198e5
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [ESP + 0x98]          ; 005198eb
    FSUB float ptr [ESP + 0x24]         ; 005198f2
    FCOMP float ptr [ESP + 0x5c]        ; 005198f6
    FNSTSW AX                           ; 005198fa
    SAHF                                ; 005198fc
    JA 0x005197c8                       ; 005198fd
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [ESP + 0x94]          ; 00519903
    FADD float ptr [ESP + 0x20]         ; 0051990a
    FCOMP float ptr [ESP + 0x4c]        ; 0051990e
    FNSTSW AX                           ; 00519912
    SAHF                                ; 00519914
    JC 0x005197c8                       ; 00519915
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD float ptr [ESP + 0x94]          ; 0051991b
    FADD float ptr [ESP + 0x1c]         ; 00519922
    FCOMP float ptr [ESP + 0x58]        ; 00519926
    FNSTSW AX                           ; 0051992a
    SAHF                                ; 0051992c
    JA 0x005197c8                       ; 0051992d
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    LEA EAX,[EBX + 0x2b4]               ; 00519933
    PUSH EAX                            ; 00519939
    CALL FUN_0044fd20                   ; 0051993a
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV EDX,dword ptr [EAX + 0x358]     ; 0051993f
    ADD ESP,0x4                         ; 00519945
    TEST EDX,EDX                        ; 00519948
    JNZ 0x00519958                      ; 0051994a
        ;   XREF to: 00519958 (CONDITIONAL_JUMP)  ; LAB_00519958
    MOV EAX,0x1                         ; 0051994c
        ;   Label: LAB_0051994c
    MOV ESP,EBP                         ; 00519951
    POP EBP                             ; 00519953
    POP EDI                             ; 00519954
    POP ESI                             ; 00519955
    POP EBX                             ; 00519956
    RET                                 ; 00519957
    FLD float ptr [ESP + 0x20]          ; 00519958
        ;   Label: LAB_00519958
    LEA EDI,[ESP + 0x84]                ; 0051995c
    LEA ESI,[ESP + 0x90]                ; 00519963
    LEA EAX,[ESP + 0x6c]                ; 0051996a
    XOR ECX,ECX                         ; 0051996e
    ADD EBX,0x2b4                       ; 00519970
    MOV dword ptr [ESP + 0x78],ECX      ; 00519976
    PUSH EAX                            ; 0051997a
    LEA EAX,[ESP + 0x7c]                ; 0051997b
    MOV dword ptr [ESP + 0x84],ECX      ; 0051997f
    PUSH EAX                            ; 00519986
    LEA EAX,[ESP + 0x8c]                ; 00519987
    MOVSD ES:EDI,ESI                    ; 0051998e
    MOVSD ES:EDI,ESI                    ; 0051998f
    MOVSD ES:EDI,ESI                    ; 00519990
    PUSH EAX                            ; 00519991
    FADD float ptr [0x005e23c8]         ; 00519992 | DAT_005e23c8
    MOV ESI,0x3f800000                  ; 00519998
    PUSH ECX                            ; 0051999d
    FADD float ptr [ESP + 0x98]         ; 0051999e
    PUSH EBX                            ; 005199a5
    FSTP float ptr [ESP + 0x9c]         ; 005199a6
    MOV dword ptr [ESP + 0x90],ESI      ; 005199ad
    CALL FUN_0044fd20                   ; 005199b4
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 005199b9
    PUSH EAX                            ; 005199bc
    CALL FUN_0044f020                   ; 005199bd
        ;   XREF to: 0044f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0044f020()
    MOV dword ptr [ESP + 0xb0],EAX      ; 005199c2
    FLD float ptr [ESP + 0xb0]          ; 005199c9
    ADD ESP,0x14                        ; 005199d0
    FLDZ                                ; 005199d3
    FXCH                                ; 005199d5
    FSTP double ptr [ESP]               ; 005199d7
    FCOMP double ptr [ESP]              ; 005199da
    FNSTSW AX                           ; 005199dd
    SAHF                                ; 005199df
    JA 0x005197c8                       ; 005199e0
        ;   XREF to: 005197c8 (CONDITIONAL_JUMP)  ; LAB_005197c8
    FLD1                                ; 005199e6
    FCOMP double ptr [ESP]              ; 005199e8
    FNSTSW AX                           ; 005199eb
    SAHF                                ; 005199ed
    JNC 0x0051994c                      ; 005199ee
        ;   XREF to: 0051994c (CONDITIONAL_JUMP)  ; LAB_0051994c
    XOR EAX,EAX                         ; 005199f4
    MOV ESP,EBP                         ; 005199f6
    POP EBP                             ; 005199f8
    POP EDI                             ; 005199f9
    POP ESI                             ; 005199fa
    POP EBX                             ; 005199fb
    RET                                 ; 005199fc

