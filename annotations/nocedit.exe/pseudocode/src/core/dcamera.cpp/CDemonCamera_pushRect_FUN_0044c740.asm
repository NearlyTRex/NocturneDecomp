; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcamera_cpp_CDemonCamera_pushRect_FUN_0044c740 (CDemonCamera *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
;
; XREF[3]:
;   core_inv.cpp_drawItemIconBackground_FUN_005001e0 at 00500355
;   core_inv.cpp_drawWeaponIconBackground_FUN_00500050 at 005001c5
;   core_set.cpp_CDemonSet_FUN_0056e5d0 at 0056e76a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044c740
        ;   Label: core_dcamera.cpp_CDemonCamera_pushRect_FUN_0044c740
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 0044c744
    CMP EDX,0x100                       ; 0044c74a
    JL 0x0044c759                       ; 0044c750
        ;   XREF to: 0044c759 (CONDITIONAL_JUMP)  ; LAB_0044c759
    INC dword ptr [EAX + 0x1d0]         ; 0044c752
    RET                                 ; 0044c758
    PUSH EDI                            ; 0044c759
        ;   Label: LAB_0044c759
    PUSH ESI                            ; 0044c75a
    SHL EDX,0x4                         ; 0044c75b
    LEA ESI,[ESP + 0x10]                ; 0044c75e
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 0044c762
    MOVSD ES:EDI,ESI                    ; 0044c769
    MOVSD ES:EDI,ESI                    ; 0044c76a
    MOVSD ES:EDI,ESI                    ; 0044c76b
    MOVSD ES:EDI,ESI                    ; 0044c76c
    POP ESI                             ; 0044c76d
    POP EDI                             ; 0044c76e
    INC dword ptr [EAX + 0x1d0]         ; 0044c76f
    RET                                 ; 0044c775

