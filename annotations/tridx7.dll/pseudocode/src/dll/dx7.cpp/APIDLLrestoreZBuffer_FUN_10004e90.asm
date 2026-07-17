; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLrestoreZBuffer_FUN_10004e90(int left,int top,int mode,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   mode
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   IDirectDrawSurface* g_ZBufferSurface = 00000000
;   IDirectDrawSurface*[8] g_MasterZBufferSurfaces
;   TerminatedCString s_restoreZBuffer_failed_10016ba0
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10004e90
        ;   Label: dll_dx7.cpp_APIDLLrestoreZBuffer_FUN_10004e90
    SUB ESP,0x10                        ; 10004e94
    MOV ECX,dword ptr [EAX*0x4 + 0x10014198] ; 10004e97 | g_MasterZBufferSurfaces
    TEST ECX,ECX                        ; 10004e9e
    JNZ 0x10004ea8                      ; 10004ea0
        ;   XREF to: 10004ea8 (CONDITIONAL_JUMP)  ; LAB_10004ea8
    XOR EAX,EAX                         ; 10004ea2
    ADD ESP,0x10                        ; 10004ea4
    RET                                 ; 10004ea7
    MOV EAX,dword ptr [ESP + 0x18]      ; 10004ea8
        ;   Label: LAB_10004ea8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 10004eac
    MOV dword ptr [ESP],EAX             ; 10004eb0
    MOV dword ptr [ESP + 0x4],EDX       ; 10004eb4
    MOV EAX,dword ptr [ESP + 0x20]      ; 10004eb8
    PUSH 0x0                            ; 10004ebc
    INC EAX                             ; 10004ebe
    PUSH 0x0                            ; 10004ebf
    LEA EDX,[ESP + 0x8]                 ; 10004ec1
    MOV dword ptr [ESP + 0x10],EAX      ; 10004ec5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 10004ec9
    PUSH EDX                            ; 10004ecd
    INC EAX                             ; 10004ece
    PUSH ECX                            ; 10004ecf
    LEA EDX,[ESP + 0x10]                ; 10004ed0
    MOV dword ptr [ESP + 0x1c],EAX      ; 10004ed4
    PUSH EDX                            ; 10004ed8
    MOV EAX,[0x10014190]                ; 10004ed9 | g_ZBufferSurface
    PUSH EAX                            ; 10004ede
    MOV EAX,dword ptr [EAX]             ; 10004edf
    CALL dword ptr [EAX + 0x14]         ; 10004ee1
    TEST EAX,EAX                        ; 10004ee4
    JZ 0x10004ef5                       ; 10004ee6
        ;   XREF to: 10004ef5 (CONDITIONAL_JUMP)  ; LAB_10004ef5
    PUSH 0x10016ba0                     ; 10004ee8 | = "restoreZBuffer failed!"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10004eed
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    MOV EAX,0x1                         ; 10004ef5
        ;   Label: LAB_10004ef5
    ADD ESP,0x10                        ; 10004efa
    RET                                 ; 10004efd

