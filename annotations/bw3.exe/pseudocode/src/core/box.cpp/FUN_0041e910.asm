; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_FUN_0041e910(CBoundingBox3D *this_ptr,CBoundingBox3D *other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; XREF[3]:
;   core_actor.cpp_FUN_004091b0 at 004092b9
;   core_setcolid.cpp_FUN_0053bc80 at 0053bfdd
;   core_setcolid.cpp_FUN_0053de10 at 0053e169
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 0041e904
        ;   Label: LAB_0041e904
    RET                                 ; 0041e909
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041e910
        ;   Label: core_box.cpp_FUN_0041e910
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041e914
    FLD float ptr [EDX]                 ; 0041e918
    FCOMP float ptr [ECX + 0xc]         ; 0041e91a
    FNSTSW AX                           ; 0041e91d
    SAHF                                ; 0041e91f
    JA 0x0041e958                       ; 0041e920
        ;   XREF to: 0041e958 (CONDITIONAL_JUMP)  ; LAB_0041e958
    FLD float ptr [EDX + 0xc]           ; 0041e922
    FCOMP float ptr [ECX]               ; 0041e925
    FNSTSW AX                           ; 0041e927
    SAHF                                ; 0041e929
    JC 0x0041e958                       ; 0041e92a
        ;   XREF to: 0041e958 (CONDITIONAL_JUMP)  ; LAB_0041e958
    FLD float ptr [EDX + 0x4]           ; 0041e92c
    FCOMP float ptr [ECX + 0x10]        ; 0041e92f
    FNSTSW AX                           ; 0041e932
    SAHF                                ; 0041e934
    JA 0x0041e958                       ; 0041e935
        ;   XREF to: 0041e958 (CONDITIONAL_JUMP)  ; LAB_0041e958
    FLD float ptr [EDX + 0x10]          ; 0041e937
    FCOMP float ptr [ECX + 0x4]         ; 0041e93a
    FNSTSW AX                           ; 0041e93d
    SAHF                                ; 0041e93f
    JC 0x0041e958                       ; 0041e940
        ;   XREF to: 0041e958 (CONDITIONAL_JUMP)  ; LAB_0041e958
    FLD float ptr [EDX + 0x8]           ; 0041e942
    FCOMP float ptr [ECX + 0x14]        ; 0041e945
    FNSTSW AX                           ; 0041e948
    SAHF                                ; 0041e94a
    JA 0x0041e958                       ; 0041e94b
        ;   XREF to: 0041e958 (CONDITIONAL_JUMP)  ; LAB_0041e958
    FLD float ptr [EDX + 0x14]          ; 0041e94d
    FCOMP float ptr [ECX + 0x8]         ; 0041e950
    FNSTSW AX                           ; 0041e953
    SAHF                                ; 0041e955
    JNC 0x0041e904                      ; 0041e956
        ;   XREF to: 0041e904 (CONDITIONAL_JUMP)  ; LAB_0041e904
    XOR EAX,EAX                         ; 0041e958
        ;   Label: LAB_0041e958
    RET                                 ; 0041e95a

