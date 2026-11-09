; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0043bb10(CDemonCamera *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[3]:
;   core_inv.cpp_FUN_004dd320 at 004dd4c7
;   core_inv.cpp_drawItemIconBackground_FUN_004dd4e0 at 004dd655
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_00531ca0 at 00531e3a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043bb10
        ;   Label: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0043bb10
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 0043bb14
    CMP EDX,0x100                       ; 0043bb1a
    JL 0x0043bb29                       ; 0043bb20
        ;   XREF to: 0043bb29 (CONDITIONAL_JUMP)  ; LAB_0043bb29
    INC dword ptr [EAX + 0x1d0]         ; 0043bb22
    RET                                 ; 0043bb28
    PUSH EDI                            ; 0043bb29
        ;   Label: LAB_0043bb29
    PUSH ESI                            ; 0043bb2a
    SHL EDX,0x4                         ; 0043bb2b
    LEA ESI,[ESP + 0x10]                ; 0043bb2e
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 0043bb32
    MOVSD ES:EDI,ESI                    ; 0043bb39
    MOVSD ES:EDI,ESI                    ; 0043bb3a
    MOVSD ES:EDI,ESI                    ; 0043bb3b
    MOVSD ES:EDI,ESI                    ; 0043bb3c
    POP ESI                             ; 0043bb3d
    POP EDI                             ; 0043bb3e
    INC dword ptr [EAX + 0x1d0]         ; 0043bb3f
    RET                                 ; 0043bb45

