; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_procedur_cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620(CProceduralTexture *this_ptr,float wave_radius,float frame_index)
;
; Parameters:
; CProceduralTexture * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   wave_radius
; float            Stack[0xc]:4   frame_index
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_procedur.cpp_CProceduralTexture_createWaterFrames_FUN_005542b0 at 005543e5
;
; Referenced Globals:
;   double DOUBLE_006409f8 = 128
;   double DOUBLE_00640a00 = 0.0625
;   float FLOAT_00640a08 = -128
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00554620
        ;   Label: core_procedur.cpp_CProceduralTexture_calculateWaveOffset_FUN_00554620
    MOV EBP,ESP                         ; 00554621
    SUB ESP,0x4                         ; 00554623
    AND ESP,0xfffffff8                  ; 00554626
    FLD double ptr [0x006409f8]         ; 00554629 | DOUBLE_006409f8
    FLD float ptr [EBP + 0x10]          ; 0055462f
    FMUL ST1                            ; 00554632
    FMUL double ptr [0x00640a00]        ; 00554634 | DOUBLE_00640a00
    FADD float ptr [EBP + 0xc]          ; 0055463a
    FST float ptr [ESP]                 ; 0055463d
    FCOMPP                              ; 00554640
    FNSTSW AX                           ; 00554642
    SAHF                                ; 00554644
    JA 0x0055464e                       ; 00554645
        ;   XREF to: 0055464e (CONDITIONAL_JUMP)  ; LAB_0055464e
    MOV EAX,dword ptr [ESP]             ; 00554647
    MOV ESP,EBP                         ; 0055464a
    POP EBP                             ; 0055464c
    RET                                 ; 0055464d
    FLD float ptr [ESP]                 ; 0055464e
        ;   Label: LAB_0055464e
    FADD float ptr [0x00640a08]         ; 00554651 | FLOAT_00640a08
    FSTP float ptr [ESP]                ; 00554657
    MOV EAX,dword ptr [ESP]             ; 0055465a
    MOV ESP,EBP                         ; 0055465d
    POP EBP                             ; 0055465f
    RET                                 ; 00554660

