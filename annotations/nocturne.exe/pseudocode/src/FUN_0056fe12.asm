; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056fe12(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_0056b405 at 0056b416
;   FUN_0057042d at 00570432
;
; Referenced Globals:
;   undefined1* PTR_LAB_005a4ab0 = 0056ff82
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056fe12
        ;   Label: FUN_0056fe12
    MOV dword ptr [EAX + 0x28],0x5a4ab0 ; 0056fe16 | PTR_LAB_005a4ab0
    MOV dword ptr [EAX],0x0             ; 0056fe1d
    MOV dword ptr [EAX + 0x4],0x0       ; 0056fe23
    MOV dword ptr [EAX + 0x8],0x0       ; 0056fe2a
    MOV dword ptr [EAX + 0xc],0x0       ; 0056fe31
    MOV dword ptr [EAX + 0x10],0x0      ; 0056fe38
    MOV dword ptr [EAX + 0x14],0x0      ; 0056fe3f
    MOV dword ptr [EAX + 0x18],0x0      ; 0056fe46
    MOV dword ptr [EAX + 0x1c],0x0      ; 0056fe4d
    MOV DL,byte ptr [EAX + 0x24]        ; 0056fe54
    MOV dword ptr [EAX + 0x20],0x0      ; 0056fe57
    AND DL,0xfc                         ; 0056fe5e
    MOV byte ptr [EAX + 0x24],DL        ; 0056fe61
    RET                                 ; 0056fe64

