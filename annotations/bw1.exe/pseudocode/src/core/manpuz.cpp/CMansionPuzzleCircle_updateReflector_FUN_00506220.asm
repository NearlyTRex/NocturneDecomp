; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateReflector_FUN_00506220(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   reflector_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_00504400 at 0050443d
;
; Referenced Globals:
;   undefined4 DAT_0060344c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00506220
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_updateReflector_FUN_00506220
    LEA EAX,[EDX*0x4 + 0x0]             ; 00506224
    SUB EAX,EDX                         ; 0050622b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0050622d
    SHL EAX,0x5                         ; 00506231
    ADD EDX,0x1340                      ; 00506234
    ADD EDX,EAX                         ; 0050623a
    MOV ECX,dword ptr [EDX + 0x5c]      ; 0050623c
    LEA EAX,[ECX*0x4 + 0x0]             ; 0050623f
    SUB EAX,ECX                         ; 00506246
    SHL EAX,0x3                         ; 00506248
    ADD EAX,ECX                         ; 0050624b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0050624d
    CMP dword ptr [ECX + EAX*0x4 + 0x5f0],0x0 ; 00506251
    JZ 0x0050627d                       ; 00506259
        ;   XREF to: 0050627d (CONDITIONAL_JUMP)  ; LAB_0050627d
    FLD float ptr [ESP + 0xc]           ; 0050625b
    FDIV float ptr [0x0060344c]         ; 0050625f | DAT_0060344c
    FSUBR float ptr [EDX + 0x18]        ; 00506265
    FST float ptr [EDX + 0x18]          ; 00506268
    FLDZ                                ; 0050626b
    FCOMPP                              ; 0050626d
    FNSTSW AX                           ; 0050626f
    SAHF                                ; 00506271
    JA 0x00506275                       ; 00506272
        ;   XREF to: 00506275 (CONDITIONAL_JUMP)  ; LAB_00506275
    RET                                 ; 00506274
        ;   Label: LAB_00506274
    MOV dword ptr [EDX + 0x18],0x0      ; 00506275
        ;   Label: LAB_00506275
    RET                                 ; 0050627c
    FLD float ptr [ESP + 0xc]           ; 0050627d
        ;   Label: LAB_0050627d
    FDIV float ptr [0x0060344c]         ; 00506281 | DAT_0060344c
    FADD float ptr [EDX + 0x18]         ; 00506287
    FST float ptr [EDX + 0x18]          ; 0050628a
    FLD1                                ; 0050628d
    FCOMPP                              ; 0050628f
    FNSTSW AX                           ; 00506291
    SAHF                                ; 00506293
    JNC 0x00506274                      ; 00506294
        ;   XREF to: 00506274 (CONDITIONAL_JUMP)  ; LAB_00506274
    MOV dword ptr [EDX + 0x18],0x3f800000 ; 00506296
    RET                                 ; 0050629d

