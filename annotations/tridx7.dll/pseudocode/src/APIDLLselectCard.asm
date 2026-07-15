; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLselectCard(int card_index)
;
; Parameters:
; int              Stack[0x4]:4   card_index
;
; Referenced Globals:
;   undefined4 DAT_10014210
;   undefined4 DAT_10138fb8
;   undefined4 DAT_102268b8
;
; Called Functions:
;   APIDLLinit
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100052c0
        ;   Label: APIDLLselectCard
    PUSH 0x102268b8                     ; 100052c4 | DAT_102268b8
    MOV ECX,dword ptr [0x10138fb8]      ; 100052c9 | DAT_10138fb8
    MOV [0x10014210],EAX                ; 100052cf | DAT_10014210
    PUSH ECX                            ; 100052d4
    CALL APIDLLinit                     ; 100052d5
        ;   XREF to: 10001a80 (UNCONDITIONAL_CALL)  ; int APIDLLinit(HWND windowHandle, CExternalRendererBridge * interface) | Ordinal_19
    ADD ESP,0x8                         ; 100052da
    RET                                 ; 100052dd

