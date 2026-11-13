; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0(CEdCheck *this_ptr)
;
; Parameters:
; CEdCheck *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_edittool.cpp_CEdCheck_calculateSpacing_FUN_0049dc50 at 0049dc55
;   shape_edittool.cpp_FUN_0049dad0 at 0049db58
;   shape_edittool.cpp_FUN_0049dc70 at 0049dc9f
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;
; Called Functions:
;   shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049dbe0
        ;   Label: shape_edittool.cpp_CEdCheck_calculateScaledWidth_FUN_0049dbe0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049dbe1
    PUSH EDX                            ; 0049dbe5
    CALL shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20 ; 0049dbe6
        ;   XREF to: 0049dc20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEdCheck_calculateBaseWidth_FUN_0049dc20(CEdCheck * this_ptr)
    IMUL EAX,dword ptr [0x0061b498]     ; 0049dbeb | DAT_0061b498
    LEA EDX,[EAX*0x4 + 0x0]             ; 0049dbf2
    SUB EDX,EAX                         ; 0049dbf9
    MOV EAX,EDX                         ; 0049dbfb
    SAR EDX,0x1f                        ; 0049dbfd
    SHL EDX,0x2                         ; 0049dc00
    SBB EAX,EDX                         ; 0049dc03
    SAR EAX,0x2                         ; 0049dc05
    MOV EDX,EAX                         ; 0049dc08
    MOV EBX,dword ptr [0x0061b49c]      ; 0049dc0a | DAT_0061b49c
    SAR EDX,0x1f                        ; 0049dc10
    ADD ESP,0x4                         ; 0049dc13
    IDIV EBX                            ; 0049dc16
    POP EBX                             ; 0049dc18
    RET                                 ; 0049dc19

