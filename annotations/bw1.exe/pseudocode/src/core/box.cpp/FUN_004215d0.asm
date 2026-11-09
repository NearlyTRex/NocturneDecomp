; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_FUN_004215d0(CBoundingBox3D *this_ptr,CBoundingBox3D *other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; XREF[3]:
;   core_actor.cpp_FUN_00409170 at 00409279
;   core_setcolid.cpp_FUN_005562c0 at 0055661d
;   core_setcolid.cpp_FUN_00558450 at 005587a9
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 004215c4
        ;   Label: LAB_004215c4
    RET                                 ; 004215c9
    MOV EDX,dword ptr [ESP + 0x4]       ; 004215d0
        ;   Label: core_box.cpp_FUN_004215d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004215d4
    FLD float ptr [EDX]                 ; 004215d8
    FCOMP float ptr [ECX + 0xc]         ; 004215da
    FNSTSW AX                           ; 004215dd
    SAHF                                ; 004215df
    JA 0x00421618                       ; 004215e0
        ;   XREF to: 00421618 (CONDITIONAL_JUMP)  ; LAB_00421618
    FLD float ptr [EDX + 0xc]           ; 004215e2
    FCOMP float ptr [ECX]               ; 004215e5
    FNSTSW AX                           ; 004215e7
    SAHF                                ; 004215e9
    JC 0x00421618                       ; 004215ea
        ;   XREF to: 00421618 (CONDITIONAL_JUMP)  ; LAB_00421618
    FLD float ptr [EDX + 0x4]           ; 004215ec
    FCOMP float ptr [ECX + 0x10]        ; 004215ef
    FNSTSW AX                           ; 004215f2
    SAHF                                ; 004215f4
    JA 0x00421618                       ; 004215f5
        ;   XREF to: 00421618 (CONDITIONAL_JUMP)  ; LAB_00421618
    FLD float ptr [EDX + 0x10]          ; 004215f7
    FCOMP float ptr [ECX + 0x4]         ; 004215fa
    FNSTSW AX                           ; 004215fd
    SAHF                                ; 004215ff
    JC 0x00421618                       ; 00421600
        ;   XREF to: 00421618 (CONDITIONAL_JUMP)  ; LAB_00421618
    FLD float ptr [EDX + 0x8]           ; 00421602
    FCOMP float ptr [ECX + 0x14]        ; 00421605
    FNSTSW AX                           ; 00421608
    SAHF                                ; 0042160a
    JA 0x00421618                       ; 0042160b
        ;   XREF to: 00421618 (CONDITIONAL_JUMP)  ; LAB_00421618
    FLD float ptr [EDX + 0x14]          ; 0042160d
    FCOMP float ptr [ECX + 0x8]         ; 00421610
    FNSTSW AX                           ; 00421613
    SAHF                                ; 00421615
    JNC 0x004215c4                      ; 00421616
        ;   XREF to: 004215c4 (CONDITIONAL_JUMP)  ; LAB_004215c4
    XOR EAX,EAX                         ; 00421618
        ;   Label: LAB_00421618
    RET                                 ; 0042161a

